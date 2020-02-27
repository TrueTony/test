# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 13:26:44 by ksenaida          #+#    #+#              #
#    Updated: 2019/09/21 17:16:32 by ksenaida         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCDIR = ./

SRC = $(SRCDIR)ft_isalnum.c $(SRCDIR)ft_isdigit.c $(SRCDIR)ft_strcmp.c \
	$(SRCDIR)ft_strncmp.c 	$(SRCDIR)ft_toupper.c $(SRCDIR)ft_isalpha.c \
	$(SRCDIR)ft_isprint.c $(SRCDIR)ft_strcpy.c $(SRCDIR)ft_strlen.c \
	$(SRCDIR)ft_isascii.c $(SRCDIR)ft_strcat.c $(SRCDIR)ft_strncat.c \
	$(SRCDIR)ft_tolower.c $(SRCDIR)ft_strdup.c 	$(SRCDIR)ft_atoi.c \
	$(SRCDIR)ft_strncpy.c $(SRCDIR)ft_strchr.c $(SRCDIR)ft_strrchr.c \
	$(SRCDIR)ft_strstr.c 	$(SRCDIR)ft_strnstr.c $(SRCDIR)ft_strlcat.c \
	$(SRCDIR)ft_memset.c $(SRCDIR)ft_bzero.c $(SRCDIR)ft_memcpy.c \
	$(SRCDIR)ft_memccpy.c $(SRCDIR)ft_memmove.c $(SRCDIR)ft_memchr.c \
	$(SRCDIR)ft_memcmp.c 	$(SRCDIR)ft_putchar.c $(SRCDIR)ft_putstr.c \
	$(SRCDIR)ft_putnbr.c $(SRCDIR)ft_putendl.c $(SRCDIR)ft_strnew.c \
	$(SRCDIR)ft_strdel.c $(SRCDIR)ft_strclr.c $(SRCDIR)ft_strequ.c \
	$(SRCDIR)ft_strnequ.c $(SRCDIR)ft_strsub.c 	$(SRCDIR)ft_strmap.c \
	$(SRCDIR)ft_strmapi.c $(SRCDIR)ft_strjoin.c $(SRCDIR)ft_striter.c \
	$(SRCDIR)ft_striteri.c 	$(SRCDIR)ft_memalloc.c $(SRCDIR)ft_memdel.c \
	$(SRCDIR)ft_strtrim.c $(SRCDIR)ft_itoa.c $(SRCDIR)ft_putchar_fd.c \
	$(SRCDIR)ft_putstr_fd.c $(SRCDIR)ft_putnbr_fd.c \
	$(SRCDIR)ft_putendl_fd.c $(SRCDIR)ft_strsplit.c \
	$(SRCDIR)ft_lstadd.c $(SRCDIR)ft_lstnew.c $(SRCDIR)ft_lstdelone.c \
	$(SRCDIR)ft_lstdel.c $(SRCDIR)ft_lstiter.c $(SRCDIR)ft_lstmap.c\
	$(SRCDIR)ft_prefics.c \
	$(SRCDIR)ft_swap.c $(SRCDIR)ft_div_mod.c $(SRCDIR)ft_foreach.c \
	$(SRCDIR)ft_sqrt.c $(SRCDIR)ft_strrev.c

OFILES = ft_isalnum.o ft_isdigit.o ft_strcmp.o ft_strncmp.o ft_toupper.o \
	ft_isalpha.o ft_isprint.o 	ft_strcpy.o ft_strlen.o ft_isascii.o \
	ft_strcat.o ft_strncat.o ft_tolower.o ft_strdup.o ft_atoi.o ft_strncpy.o \
	ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o ft_strlcat.o \
	ft_memset.o ft_bzero.o ft_memcpy.o 	ft_memccpy.o ft_memmove.o \
	ft_memchr.o ft_memcmp.o 	ft_putchar.o ft_putstr.o ft_putnbr.o \
	ft_putendl.o ft_strnew.o ft_strdel.o ft_strclr.o ft_strequ.o ft_strnequ.o \
	ft_strsub.o ft_strmap.o ft_strmapi.o ft_strjoin.o ft_striter.o \
	ft_striteri.o ft_memalloc.o ft_memdel.o 	ft_strtrim.o ft_itoa.o \
	ft_putchar_fd.o ft_putstr_fd.o ft_putnbr_fd.o ft_putendl_fd.o \
	ft_strsplit.o \
	ft_lstadd.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstiter.o \
	ft_lstmap.o \
	ft_prefics.o ft_swap.o ft_div_mod.o ft_foreach.o \
	ft_sqrt.o ft_strrev.o

HDDIR = libft.h

all:	$(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC) -I $(HDDIR)
	ar rc $(NAME) $(OFILES)

clean:
	/bin/rm -f $(OFILES)

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all

.PHONY: re clean fclean all
