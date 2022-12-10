c_dos	= $(wildcard ft_b*.c ft_i*.c ft_t*.c ft_s*.c ft_m*.c)

o_dos	= $(c_dos:.c=.o)

flags		=	-Wall -Wextra -Werror
NAME		=	libft.a

$(NAME):
	gcc -c $(flags) $(c_dos)
	ar rcs $(NAME) $(o_dos)

all: $(NAME)

clean:
	rm -f $(o_dos)

fclean: clean
	rm -f $(NAME)

run:
	@gcc main.c $(NAME) -o libft
	@./libft
	@rm -f libft

re: fclean all

.PHONY: all clean fclean re