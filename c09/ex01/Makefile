# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: troberts <troberts@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 13:35:34 by troberts          #+#    #+#              #
#    Updated: 2022/02/22 19:16:07 by troberts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= gcc
CFLAGS= -Wall -Wextra -Werror
NAME= libft.a

AR= ar
ARARCH= -cr
ARINDEX= -s
LIB = ranlib

SRC_DIR := srcs/

SRC= srcs/ft_putchar.c \
	srcs/ft_swap.c \
	srcs/ft_putstr.c \
	srcs/ft_strlen.c \
	srcs/ft_strcmp.c

HEAD= includes/

OBJ= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARARCH) $@ $^
	$(AR) $(ARINDEX) $@

%.o: %.c
	$(CC) $(CFLAGS) -I $(HEAD) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
