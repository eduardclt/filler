# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecloete <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/04 10:57:19 by ecloete           #+#    #+#              #
#    Updated: 2017/12/04 10:57:23 by ecloete          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= filler

CFLAGS	= -Wall -Werror -Wextra

SRC =	main.c \
		start.c \
		save_player.c \
		positions.c \
		valid_move.c \
		myfree.c \
		place_move.c \

OBJ = $(SRC:.c=.o)

LIBFLAGS = -I./ -L ./libft -lft

all: $(NAME)

$(NAME):
		make all -C libft/ 
			gcc $(CFLAGS) -o $(NAME) $(SRC) $(LIBFLAGS)
		@echo "-----Compiled-----"
clean:
		rm -f $(OBJ)
			make clean -C libft/

fclean: clean
		rm -f $(NAME)
			make fclean -C libft/

re: fclean all
