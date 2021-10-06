# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 17:06:28 by jarrakis          #+#    #+#              #
#    Updated: 2021/10/06 18:53:28 by jarrakis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		gcc

FLAGS =		-Wall -Wextra -Werror

RM =		rm -rf

NAME =		libft.a

SRC =		ft_isalnum.c \
			ft_isalpha.c \
			ft_isdigit.c

SRCS =		$(SRC)

OBJS =		$(SRCS: .c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
				@ar rcs $(NAME) $(OBJS)
				@ranlib $(NAME)

%.o: %.c
				@$(CC) $(FLAGS) -I -c $< -o $@

clean:
				@$(RM) -f $(OBJS)

fclean:		clean
				@$(RM) $(NAME)

re:			fclean all

.PHONY:		all, clean, fclean, re