NAME = libftprintf.a

SRCS = $(wildcard ft*.c)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $^

%.o: %.c
	@gcc -Wall -Wextra -Werror -o $@ -c $^

clean:
	@rm -rf *.o

test: $(NAME)
	@gcc $^ test.c
	@./a.out
	@rm ./a.out

fclean:
	@rm -rf $(NAME) *.o

re: fclean $(NAME)

.PHONY: re fclean clean all