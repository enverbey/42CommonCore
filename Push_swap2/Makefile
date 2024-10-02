NAME = push_swap
FLAG = -Wall -Wextra -Werror -g
SRC = ./src/check/check_equal.c \
		./src/check/check_int.c \
		./src/check/check_main.c \
		./src/check/check_number.c \
		./src/check/check_sorted.c \
		./src/free/free_stack.c \
		./src/free/free_array.c \
		./src/libft/ft_atoi.c \
		./src/libft/ft_putstr.c \
		./src/libft/ft_split.c \
		./src/libft/ft_strcmp.c \
		./src/libft/ft_strlen.c \
		./src/main/push_swap.c \
		./src/operators/p_operators.c \
		./src/operators/r_operators.c \
		./src/operators/rr_operators.c \
		./src/operators/s_operators.c \
		./src/radix_with_bite/radix_short_with_bite.c \
		./src/stack/pop.c \
		./src/stack/push.c

OBJ = check_equal.o \
		check_int.o \
		check_main.o \
		check_number.o \
		check_sorted.o \
		free_stack.o \
		free_array.o \
		ft_atoi.o \
		ft_putstr.o \
		ft_split.o \
		ft_strcmp.o \
		ft_strlen.o \
		push_swap.o \
		p_operators.o \
		r_operators.o \
		rr_operators.o \
		s_operators.o \
		radix_short_with_bite.o \
		pop.o \
		push.o


all: $(NAME)
$(NAME):
	gcc $(FLAG) -c $(SRC)
	gcc $(FLAG) $(OBJ) ./src/main/main.c -o $(NAME) 
clean:
	/bin/rm -f  $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
.PHONY: all bonus clean fclean