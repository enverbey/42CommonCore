#include "get_next_line.h"


int ft_strlen(char *str)
{
	int a = 0;
	while(str&&str[a])
		a++;
	return a;
}

char *ft_strjoin(char* str1,char* str2)
{
	char *tmp;
 	tmp = (char *)malloc((ft_strlen(str1) + ft_strlen(str2)+1)* sizeof(char));
	int i = 0;
	while(str1 && str1[i])
	{
		tmp[i] = str1[i];
		i++;
	}
	int j = 0;
	while(str2 && str2[j])
	{
		tmp[i+j] = str2[j];
		j++;
	}
	tmp[i+j] = '\0';
	free(str1);
	return tmp;
}
int check(char *line)
{
	int i = 0;
	if(line == NULL)
	{
		return -1;
	}
	while(line[i])
	{
		if(line[i] == '\n')
		{
			return i;
		}
		i++;
	}
	return -1;
}

char *ft_substr(char *str, int i)
{
	int j = 0;
	char *new = (char *)malloc((i+1)*sizeof(char));
	while(str[j] && j < i)
	{
		new[j] = str[j];
		j++;
	}
	new[j] ='\0';
	return new;
}

char *next_line(int fd,char *s)
{
	char *new;
	int  i = 1;
	
	while(check(s) <0&& i > 0)
	{
		new  =(char *)malloc(sizeof(char)*(BUFFER_SIZE +1));
		i = read(fd, new, BUFFER_SIZE);
		if(i < 0)
		{
			free(new);
			free(s);
			return NULL;
		}
			
		if (i == 0 && !s)
			return (free(new), NULL);
		new[i] = '\0';
		s = ft_strjoin(s,new);
		free(new);
	}
	return s;
}

char *get_next_line(int fd)
{
	if(BUFFER_SIZE <=0 || fd < 0)
		return NULL;
	static char* line = NULL;
	char *str;
	line = next_line(fd,line);
	int i = check(line);
	char *tmp;
	if(line != NULL)
	{		
		if(i != -1)
		{
			tmp = line;
			str = ft_substr(line,i+1);
			line = ft_substr(&line[i+1],ft_strlen(line)-i);
			free(tmp);
		}		
		else
		{
			str = ft_substr(line,ft_strlen(line));
			free(line);
			line = NULL;
		}		
		return(str);
	}
	return NULL;
}
