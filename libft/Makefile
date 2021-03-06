# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 20:02:14 by amerlon-          #+#    #+#              #
#    Updated: 2018/12/12 21:54:04 by amerlon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_memcmp.c \
		ft_bzero.c \
		ft_memset.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strlcat.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strsplit.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_iswhitespace.c \
		ft_nbrlen.c \
		ft_wordcount.c \
		ft_nextword.c \
		ft_strndup.c \
		ft_iloveyoupeer.c \
		ft_lstclr.c \
		ft_realloc.c \
		ft_strshift.c \
		ft_strjoinch.c \
		ft_copyuntil.c \
		ft_strmjoin.c \
		ft_strchr_safe.c \
		ft_strdup_safe.c \

OBJS = $(SRC:.c=.o)
INCLUDES = libft.h

all: $(NAME)

$(NAME): $(OBJS) 
	@ar rcs $(NAME) $(OBJS)
	@echo "Buildin library"
	@ranlib $(NAME)
	@echo "Indexing library"

$(OBJS): %.o: %.c
	gcc -Wall -Werror -Wextra -O3 -c $< -I$(INCLUDES) -o $@

clean:
	@rm -f $(OBJS)
	@echo "Deleting binaries"

fclean: clean
	@rm -f libft.a
	@echo "Deleting library"

re: fclean all

norm:
	@echo "Checking norm"
	@norminette $(SRC) libft.h

test1: re
	make clean
	gcc -g ../test/tests1.c libft.a -o test_output
	./test_output

testput: re
	make clean
	gcc -g ../test/testsput.c libft.a -o test_output
	./test_output > ../test/test2_received
	diff -U 3 ../test/test2_expected ../test/test2_received
	diff -U 3 ../test/test2_expected ../test/test2_received_fd

test2: re
	make clean
	gcc -g ../test/tests2.c libft.a -o test_output
	./test_output

.PHONY: all name clean fclean re norm
