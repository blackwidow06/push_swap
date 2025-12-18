# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 11:28:41 by malavaud          #+#    #+#              #
#    Updated: 2025/12/17 11:28:41 by malavaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g
RM			= rm -f

SRCS		= stack_utils.c \
		little_sorts.c \
		swap.c \
		push.c \
		rotate.c \
		reverse.c \
		parsing.c \
		sort_utils.c \
		push_swap.c \
		ft_join.c \
		ft_split.c \
		main.c

OBJS		= $(SRCS:.c=.o)

HEADER		= pswap.h

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:		%.c $(HEADER)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

