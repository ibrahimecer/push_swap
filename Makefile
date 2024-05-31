# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 14:51:45 by iecer             #+#    #+#              #
#    Updated: 2024/05/23 14:51:46 by iecer            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	main.c	\
		data_create.c	\
		utils.c	\
		exit.c	\
		selection_sort.c	\
		radix_sort.c	\
		operations/push.c	\
		operations/reverse.c	\
		operations/rotate.c	\
		operations/swap.c	\


CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH		=	libft
LIBFT			=	$(LIBFT_PATH)/libft.a
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	$(RM) $(OBJ)
	make -C $(LIBFT_PATH) clean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all re clean fclean libft
