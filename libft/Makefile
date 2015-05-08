#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/04 17:57:19 by kcouliba          #+#    #+#              #
#    Updated: 2015/05/05 16:03:29 by kcouliba         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=libft.a
SRCDIR=sources/
BINDIR=binaries/
INCDIR=includes/
CC=cc
LC=ar rc
CFLAGS=-Werror -Wextra -Wall
LFLAGS=-I$(INCDIR)
_BIN=ft_atoi.o ft_tolower.o ft_toupper.o ft_itoa.o\
 ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isupper.o ft_isdigit.o\
 ft_islower.o ft_isprint.o ft_isblank.o ft_isinarray.o\
 ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memset.o ft_memchr.o ft_memcmp.o\
 ft_memmove.o ft_memalloc.o ft_memdel.o ft_realloc.o\
 ft_pow.o\
 ft_strcat.o ft_strchr.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlcat.o\
 ft_strlen.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnstr.o ft_strrchr.o\
 ft_strstr.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o\
 ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strtrim.o ft_strsplit.o\
 ft_strsub.o ft_strjoin.o ft_strreverse.o\
 ft_tabinit.o ft_tablen.o ft_tabappend.o\
 ft_putchar.o ft_putchar_fd.o ft_putstr.o ft_putstr_fd.o ft_putnbr.o\
 ft_putnbr_fd.o ft_putendl.o ft_putendl_fd.o\
 ft_lstnew.o ft_lstdel.o ft_lstdelone.o ft_lstadd.o ft_lstiter.o ft_lstprint.o\
 ft_lstmap.o ft_lstpushback.o\
 ft_error.o ft_information.o
BIN= $(patsubst %, $(BINDIR)%, $(_BIN))

all:		$(BINDIR) $(NAME)

$(NAME):		$(BIN)
	@ $(LC) $@ $^
	@ ranlib $(NAME)
	@ echo "libft compilation done."

$(BINDIR)%.o:		$(SRCDIR)%.c
	@ $(CC) $(CFLAGS) -o $@ -c $< $(LFLAGS)

$(BINDIR):
	@ mkdir $(BINDIR)

clean:
	@ rm -f $(BIN)

fclean:		clean
	@ rm -f $(NAME)
	@ rm -rf $(BINDIR)

re:			fclean all
