# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnancy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 20:20:22 by nnancy            #+#    #+#              #
#    Updated: 2021/07/19 17:50:13 by nnancy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

.c.o:
			gcc -Wall -Wextra -Werror -c -I./includes $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
