#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/13 14:27:30 by kcouliba          #+#    #+#              #
#    Updated: 2015/05/08 19:24:30 by kcouliba         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=wolf3d
LIBDIR=libft/
SRCDIR=sources/
BINDIR=binaries/
INCDIR=includes/
LIB=$(LIBDIR)libft.a
LIBS=-lmlx -framework OpenGL -framework AppKit -lft -lm
CC=gcc
CFLAGS=-Wall -Wextra -Werror
ILINKS=-I $(INCDIR) -I $(LIBDIR)includes/
LLINKS=-L /usr/X11/lib/ -L $(LIBDIR)
_BIN=main.o expose_hook.o key_hook.o window_init.o\
	image.o
BIN= $(patsubst %, $(BINDIR)%, $(_BIN))

all:		$(LIB) $(BINDIR) $(NAME)

$(NAME):	$(BIN)
	@ $(CC) $(CFLAGS) $^ -o $@ $(LLINKS) $(LIBS)

$(LIB):
	@ make -C libft/

$(BINDIR):
	@ mkdir $(BINDIR)

$(BINDIR)%.o:		$(SRCDIR)%.c
	@ $(CC) $(CFLAGS) -o $@ -c $< $(ILINKS)

clean:
	@ make $@ -C libft/
	@ rm -f $(BIN)

fclean:		clean
	@ make $@ -C libft/
	@ rm -f $(NAME)
	@ rm -rf $(BINDIR)

re:			fclean all

.PHONY:		all	clean re fclean