# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ehollidg <ehollidg@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/04/04 15:51:09 by euan           #+#    #+#                 #
#    Updated: 2019/04/17 18:05:56 by ehollidg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = get_next_line.c main.c
OBJ = get_next_line.o main.o
NAME = a.out

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	clang -Wall -Werror -Wextra -I libft/includes -c $(SRC)
	clang -o $(NAME) $(OBJ) -I libft/includes -L libft -lft

clean:
	make -C libft/ clean
	rm -f $(OBJ) get_next_line.gch

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)

re: fclean all
