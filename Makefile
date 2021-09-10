# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 14:06:58 by nlouro            #+#    #+#              #
#    Updated: 2021/09/10 15:18:44 by nlouro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
C_FLAGS =  -c -Wall -Wextra -Werror
C_FILES = ft_bzero.c	ft_isascii.c	ft_memchr.c		ft_memmove.c	ft_strlcat.c	\
	  	  ft_strncmp.c	ft_toupper.c 	ft_isalnum.c	ft_isdigit.c	ft_memcmp.c		\
	  	  ft_memset.c	ft_strlcpy.c	ft_strrchr.c	ft_isalpha.c	ft_isprint.c	\
	  	  ft_memcpy.c	ft_strchr.c		ft_strlen.c		ft_tolower.c	ft_strnstr.c	\
		  ft_atoi.c		ft_strdup.c		ft_calloc.c										\
		  ft_substr.c	ft_strjoin.c

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

ft_isalpha.o:
	norminette ft_isalpha.c
	norminettev2 ft_isalpha.c
	gcc -c -Wall -Wextra -Werror ft_isalpha.c

test_ft_islpha:
	gcc -Wall -Wextra -Werror test/test_ft_isalpha.c -o test_ft_isalpha.out
	chmod +x test_ft_isalpha.out

ft_strlen.o:
	norminette ft_strlen.c
	norminettev2 ft_strlen.c
	gcc -c -Wall -Wextra -Werror ft_strlen.c

test_ft_strlen:
	gcc -Wall -Wextra -Werror test/test_ft_strlen.c -o test_ft_strlen.out
	chmod +x test_ft_strlen.out

run:
	./test_ft_strlen.out
