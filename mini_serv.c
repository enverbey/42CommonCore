#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_client{
	int		id;
	char	msg[900000];
}t_client;

t_client	clients[1024];
fd_set		read_set, write_set, current;
int 		maxfd = 0, gid = 0;
char 		send_buffer[900000], recv_buffer[900000];

void
	err(char *msg)
{
	if (msg)
		write(2, msg, strlen(msg));
	else
		write(2, "Fatal error", 11);
	write(2, "\n", 1);
	exit(1);
}

int
	errCheck(int errcnd, int res, char *msg)
{
	if (errcnd == res)
		err(msg);
	return (res);
}

void
	send_to_all(int except)
{
	for (int fd=0; fd<= maxfd; fd++)
	{
		if (FD_ISSET(fd, &write_set) && fd != except)
		{
			errCheck(-1, send(fd, send_buffer, strlen(send_buffer), 0), NULL);
		}
	}
}

int
	main(int ac, char **av)
{
	errCheck(1, (ac !=2), "Wrong number of arguments");

	struct sockaddr_in	servaddr;
	socklen_t			len;
	int					sockfd;

	maxfd = sockfd = errCheck(-1, socket(AF_INET, SOCK_STREAM, 0), NULL);

	FD_ZERO(&current);
	FD_SET(sockfd, &current);
	bzero(clients, sizeof(clients)); 
	bzero(&servaddr, sizeof(servaddr)); 

	servaddr.sin_family = AF_INET; 
	servaddr.sin_addr.s_addr = htonl(2130706433); //127.0.0.1
	servaddr.sin_port = htons(atoi(av[1]));

	errCheck(-1, bind(sockfd, (const struct sockaddr *)&servaddr, sizeof(servaddr)), NULL);
	errCheck(-1, listen(sockfd, 100), NULL);

	while (1)
	{
		read_set = write_set = current;
		if (select(maxfd+1, &read_set, &write_set, 0, 0) == -1)
			continue ;
		for (int fd=0; fd<=maxfd; fd++)
		{
			if (FD_ISSET(fd, &read_set))
			{
				if (fd == sockfd)
				{
					int clientfd = accept(sockfd, (struct sockaddr *)&servaddr, &len);
					if (clientfd == -1)
						continue ;
					if (clientfd > maxfd)
						maxfd = clientfd;
					clients[clientfd].id = gid++;
					FD_SET(clientfd, &current);
					sprintf(send_buffer, "server: client %d just arrived\n", clients[clientfd].id);
					send_to_all(clientfd);
				}
				else
				{
					int rev = recv(fd, recv_buffer, sizeof(recv_buffer), 0);
					if (rev <= 0)
					{
						sprintf(send_buffer, "server: client %d just left\n", clients[fd].id);
						send_to_all(fd);
						FD_CLR(fd, &current);
						close(fd);
						bzero(clients[fd].msg, strlen(clients[fd].msg));
					}
					else
					{
						char *tmp = clients[fd].msg;
						for (int i=0, j=strlen(tmp); i<rev; i++, j++)
						{
							tmp[j] = recv_buffer[i];
							if (tmp[j] == '\n')
							{
								tmp[j] = '\0';
								sprintf(send_buffer, "client %d: %s\n", clients[fd].id, tmp);
								send_to_all(fd);
								bzero(tmp, strlen(tmp));
								j = -1;
							}
						}
					}
				}
				break;
			}
		}
	}
	return (0);
}