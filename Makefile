#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwagner <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 11:47:06 by cwagner           #+#    #+#              #
#    Updated: 2015/01/21 22:23:46 by cwagner          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
CCT = cc
CFLAGS = -Wall -Wextra -Werror -g
CFLAGST = -Wall -Wextra -ansi -pedantic
NAME = libft.a
LIB = ar rc
FONCTIONS = get_next_line.c			\
			gnl_sock.c				\
			ft_swap.c				\
			ft_memset.c				\
			ft_memcpy.c				\
			ft_strlen.c				\
			ft_bzero.c				\
			ft_memccpy.c			\
			ft_memmove.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_strdup.c				\
			ft_strcpy.c				\
			ft_strncpy.c			\
			ft_strcat.c				\
			ft_strncat.c			\
			ft_strlcat.c			\
			ft_strchr.c				\
			ft_strrchr.c			\
			ft_strstr.c				\
			ft_strnstr.c			\
			ft_strcmp.c				\
			ft_strncmp.c			\
			ft_atoi.c				\
			ft_isalpha.c			\
			ft_isdigit.c			\
			ft_isalnum.c			\
			ft_isascii.c			\
			ft_isprint.c			\
			ft_toupper.c			\
			ft_tolower.c			\
			ft_putchar.c			\
			ft_putstr.c				\
			ft_putendl.c			\
			ft_putnbr.c				\
			ft_memalloc.c			\
			ft_memdel.c				\
			ft_strnew.c				\
			ft_strdel.c				\
			ft_strclr.c				\
			ft_striter.c			\
			ft_striteri.c			\
			ft_strmap.c				\
			ft_strmapi.c			\
			ft_strequ.c				\
			ft_strnequ.c			\
			ft_putchar_fd.c			\
			ft_putstr_fd.c			\
			ft_putendl_fd.c			\
			ft_putendl_sock.c		\
			ft_putendleot_sock.c	\
			ft_putnbr_fd.c			\
			ft_strsub.c				\
			ft_strrev.c				\
			ft_strjoin.c			\
			ft_strtrim.c			\
			ft_strsplit.c			\
			ft_lstnew.c				\
			ft_lstadd.c				\
			ft_lstdelone.c			\
			ft_lstdel.c				\
			ft_lstiter.c			\
			ft_lstmap.c				\
			ft_strchri.c			\
			ft_strnjoin.c			\
			ft_strtabdup.c			\
			ft_freechartab.c		\
			ft_lstsplit.c			\
			ft_printtabchar.c		\
			ft_strsplitwhite.c		\
			ft_chartablength.c		\
			ft_strcheck.c			\
			ft_error.c				\
			ft_error_exit.c			\
			ft_strfreejoin.c		\
			ft_itoa.c				\
			ft_glue.c

OBJETS = $(FONCTIONS:.c=.o)
TEST = main.c
HEADER = ../includes/

all: $(NAME)

$(NAME): $(OBJETS)
	@echo "\033[32m[Building] \033[0m" | tr -d '\n'
	$(LIB) $(NAME) $(OBJETS)
	@echo "\033[32m[Indexing Lib] \033[0m" | tr -d '\n'
	ranlib $(NAME)

%.o: %.c
	@echo "\033[33m[Doing object] \033[0m" | tr -d '\n'
	$(CC) $(CFLAGS) -c $< -I$(HEADER)

clean:
	@echo "\033[34m[Cleaning] \033[0m" | tr -d '\n'
	rm -f $(OBJETS)

fclean: clean
	@echo "\033[34m[Filecleaning] \033[0m" | tr -d '\n'
	rm -f $(NAME)

re: fclean all

mall: re
	$(CCT) $(CFLAGST) -g $(TEST) -L. -lft
	rm -f $(OBJETS)

mclean: fclean
	rm ./a.out

mre: mclean mall

.PHONY: clean fclean re mall mclean mre