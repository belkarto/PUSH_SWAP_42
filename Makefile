#----------------------------------------------#
# 					Colors
#----------------------------------------------#
NO_COLOR    = \033[0m
GRAY 		= \033[0;90m
RED 		= \033[1:4;5;91m
GREEN 		= \033[1;3;5;92m
#----------------------------------------------#
NAME		= push_swap
B_NAME		= checker
CFLAGS		= -Wall -Wextra -Werror
SRC			= src/push_swap.c src/fill_lst.c src/rules.c \
			  src/rules1.c src/rules2.c \
			  src/checker.c src/three_args.c src/sorting.c\
			  src/five_args.c src/get_the_smallest.c \
			  src/lis.c src/get_back_a.c src/positions.c\
			  src/positions2.c src/move_it.c

CHECKER		= b_src/checker_bonus.c \
			  b_src/utils_bonus.c b_src/utils1_bonus.c \
			  b_src/rules_bonus.c b_src/rules1_bonus.c \
			  b_src/rules2_bonus.c \

OBJEC_B		= $(CHECKER:.c=.o)

OBJEC		= $(SRC:.c=.o)
LIBFT		= my_lib/libft.a


all			: $(NAME)


%.o			: %.c
	@printf "\r$(GRAY)making objects...$(NO_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@


$(NAME)		: $(LIBFT) $(OBJEC) 
	@printf "\r$(GREEN) -->DONE<--$(NO_COLOR)"
	@$(CC) $(CFLAGS) $(OBJEC) my_lib/libft.a -o $(NAME)


$(LIBFT)	:
	@make -C my_lib


bonus		: $(B_NAME)
	
$(B_NAME)	:	$(LIBFT) $(OBJEC_B)
	@printf "\r$(GREEN) -->DONE<--$(NO_COLOR)"
	@$(CC) $(CFLAGS) $(OBJEC_B) my_lib/libft.a -o $(B_NAME)

clean		:
	@make clean -C my_lib
	@rm -f $(OBJEC) $(OBJEC_B)
	@printf "\r$(RED)--> cleaned <--\n$(NO_COLOR)"

fclean		: clean
	@make fclean -C my_lib
	@rm -f $(NAME) $(B_NAME)
	@printf "\r$(RED)--> cleaned <--\n$(NO_COLOR)"

re			: fclean all

.PHONY		: all clean fclean bonus re

