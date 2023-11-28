# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 18:33:34 by tiacovel          #+#    #+#              #
#    Updated: 2023/11/28 16:18:17 by tiacovel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_putchr.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_putptr.c ft_putexa_low.c ft_putexa_up.c ft_printf.c

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
NAME			= libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -c $(SRCS)
		ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
