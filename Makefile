# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 17:06:28 by jarrakis          #+#    #+#              #
#    Updated: 2021/10/08 00:44:39 by jarrakis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		gcc

FLAGS =		-Wall -Wextra -Werror

RM =		rm -rf

NAME =		libft.a

SRC =		ft_isalnum.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c

SRCS =		$(SRC)

OBJS =		$(SRCS: .c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
				@ar rcs $(NAME) $(OBJS)

%.o: %.c
				@$(CC) $(FLAGS) -I -c $< -o $@

# Правило для убунту
#Удалить потом или закоментировать

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
				@$(RM) -f $(OBJS)

fclean:		clean
				@$(RM) $(NAME)

re:			fclean all

.PHONY:		all, clean, fclean, re