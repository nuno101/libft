# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 14:06:58 by nlouro            #+#    #+#              #
#    Updated: 2021/09/23 17:06:19 by nlouro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
C_FLAGS =  -c -Wall -Wextra -Werror
C_FILES = ft_bzero.c	ft_isascii.c	ft_memchr.c		ft_memmove.c	ft_strlcat.c	\
	  	  ft_strncmp.c	ft_toupper.c 	ft_isalnum.c	ft_isdigit.c	ft_memcmp.c		\
	  	  ft_memset.c	ft_strlcpy.c	ft_strrchr.c	ft_isalpha.c	ft_isprint.c	\
	  	  ft_memcpy.c	ft_strchr.c		ft_strlen.c		ft_tolower.c	ft_strnstr.c	\
		  ft_atoi.c		ft_strdup.c		ft_calloc.c										\
		  ft_itoa.c		ft_substr.c		ft_strjoin.c	ft_strtrim.c	ft_split.c		\
			ft_strmapi.c		ft_striteri.c		\
			ft_putchar_fd.c		ft_putstr_fd.c		ft_putendl_fd.c		ft_putnbr_fd.c

OBJ_FILES = $(C_FILES:%.c=%.o)

all: $(NAME) 

$(NAME): $(OBJ_FILES)
	ar -rcs $(NAME) $(OBJ_FILES)

$(OBJ_FILES): $(C_FILES)
	gcc $(C_FLAGS) $(C_FILES)

clean:
	rm -f $(OBJ_FILES) 

fclean: clean
	rm -f $(OBJ_FILES) 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
