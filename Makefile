# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 17:51:34 by obouizga          #+#    #+#              #
#    Updated: 2021/11/30 13:10:15 by obouizga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_putnbr_base.c ft_treat.c isalpha_f.c ft_putnbr_u.c ft_putnbr_base_u.c putnbr_unsigned.c

OBJ = $(SOURCE:.c=.o)
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
all : $(NAME)

$(NAME) : $(OBJ)

%.o : %.c 
	$(CC) $(CFLAGS) -c $<
	ar rc $(NAME) $@

clean :
	rm -rf $(OBJ)
	
fclean : clean
	rm $(NAME)

re : fclean all 