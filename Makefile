NAME	= push_swap

SRC		= src/push_swap.c src/fill_lst.c src/rules.c \
		  src/checker.c src/three_args.c src/sorting.c\
		  src/five_args.c
		  

OBJEC	= $(SRC:.c=.o)
LIBFT	= my_lib/libft.a
all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(LIBFT) $(OBJEC) 
	$(CC) $(CFLAGS) $(OBJEC) my_lib/libft.a -o $(NAME)

$(LIBFT) :
	@make -C my_lib

clean:
	@make clean -C my_lib
	rm -f $(OBJEC)

fclean: clean
	@make fclean -C my_lib
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

