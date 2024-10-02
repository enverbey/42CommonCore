NAME = push_swap

CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC				=	./src/main/push_swap.c \
					./src/checker/check_equal.c \
					./src/checker/check_int.c \
					./src/checker/check_number.c \
					./src/checker/check_main.c \
					./src/checker/is_sorted.c \
					./src/free/free_stack.c \
					./src/free/word_count.c \
					./src/operators/p_operators.c \
					./src/operators/r_operators.c \
					./src/operators/rr_operators.c \
					./src/operators/s_operators.c \
					./src/sort/sort_quick.c \
					./src/sort/sort_three.c \
					./src/stack/pop.c \
					./src/stack/push.c \
					./src/sort/utils.c

OBJS			=	main.o \
					push_swap.o \
					check_equal.o \
					check_int.o \
					check_number.o \
					check_main.o \
					is_sorted.o \
					free_stack.o \
					word_count.o \
					p_operators.o \
					r_operators.o \
					rr_operators.o \
					s_operators.o \
					sort_quick.o \
					sort_three.o \
					utils.o \
					pop.o \
					push.o


LIBFT_PATH		=	./src/libft
LIBFT			=	$(LIBFT_PATH)/libft.a

all : $(NAME)

b : bonus
bc : bfclean

bonus: $(NAME)
	@$(CC) $(FLAGS) checker.c $(SRC) $(LIBFT) -o checker

bfclean: fclean
	@rm -rf checker

$(NAME):			$(LIBFT)
					@$(CC) $(FLAGS) ./src/main/main.c $(SRC) $(LIBFT) -o $(NAME)

$(LIBFT):
		@make -C $(LIBFT_PATH) all

clean:
	@rm -f  $(OBJS)
	@make -C $(LIBFT_PATH) clean
	@printf "\033[0;33mpush_swap clean yapildi\n\033[0m"

fclean:
	@rm -f  $(OBJS)
	@make -C $(LIBFT_PATH) fclean
	@printf "\033[0;33mpush_swap fclean yapildi\n\033[0m"
	@rm -f $(NAME)
	@rm -rf checker

re: fclean all

.PHONY : all clean fclean re bonus bclean