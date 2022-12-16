# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gda-cruz <gda-cruz@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 20:46:57 by gda-cruz          #+#    #+#              #
#    Updated: 2022/11/10 17:19:28 by gda-cruz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
# CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

HEADER		= ft_printf.h
SOURCES 	= ft_printf.c ft_print_c.c ft_print_d.c ft_print_i.c ft_print_p.c ft_print_s.c \
				ft_print_u.c ft_print_x.c ft_print_X.c ft_redirect.c ft_strchr.c ft_flags_bonus.c
SOURCES_O	= $(SOURCES:.c=.o)

NAME	= libftprintf.a

all:		$(NAME)

$(NAME):	$(SOURCES_O) $(HEADER)
	ar -rcs $(NAME) $(SOURCES_O)
	ranlib	$(NAME)

.c.o:
	$(CC) $(CFLAGS) -I/$(HEADER) -c $< -o $(<:.c=.o)

test:		$(NAME)
	$(CC) $(CFLAGS) ft_printf.c -L. -lftprintf -o $@
	./$@

bonus:			$(NAME) $(SOURCES_O)
	ar -rcs $(NAME) $(SOURCES_O)
	ranlib $(NAME)

clean:
	$(RM) $(SOURCES_O)

fclean:		clean
	$(RM) $(NAME) test
	
re:			fclean all

.PHONY:		all clean fclean re