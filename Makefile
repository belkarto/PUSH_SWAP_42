NAME	= push_swap
B_NAME	= checker
CFLAGS	= -Wall -Wextra -Werror
SRC		= src/push_swap.c src/fill_lst.c src/rules.c \
		  src/rules1.c src/rules2.c \
		  src/checker.c src/three_args.c src/sorting.c\
		  src/five_args.c src/get_the_smallest.c \
		  src/lis.c src/get_back_a.c src/positions.c\
		  src/positions2.c src/move_it.c

CHECKER = b_src/checker_bonus.c \
		  b_src/utils_bonus.c b_src/utils1_bonus.c \
		  b_src/rules_bonus.c \
		  b_src/rules1_bonus.c b_src/rules2_bonus.c \

OBJEC_B = $(CHECKER:.c=.o)

OBJEC	= $(SRC:.c=.o)
LIBFT	= my_lib/libft.a
all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(LIBFT) $(OBJEC) 
	$(CC) $(CFLAGS) $(OBJEC) my_lib/libft.a -o $(NAME)

$(LIBFT) :
	@make -C my_lib
bonus	: $(LIBFT) $(OBJEC_B)
	$(CC) $(CFLAGS) $(OBJEC_B) my_lib/libft.a -o $(B_NAME)

clean:
	@make clean -C my_lib
	rm -f $(OBJEC) $(OBJEC_B)

fclean: clean
	@make fclean -C my_lib
	rm -f $(NAME) $(B_NAME)

re: fclean all

.PHONY: all clean fclean bonus re

