##
## Makefile for 106bombyx in /home/corjon_l//projets/All
## 
## Made by lysandre corjon
## Login   <corjon_l@epitech.net>
## 
## Started on  Thu Feb 21 18:37:13 2013 lysandre corjon
## Last update Sun Feb 24 15:42:26 2013 lysandre corjon
##

CC	= cc -g -g3

CFLAGS	= -Wall -Wextra -Werror

LIB	= -L/usr/lib64 -lmlx_$(HOSTTYPE) -L/usr/lib64/X11 -lXext -lX11 -lm

RM	= rm -f

NAME	= 106bombyx

SRC	= main.c \
	  put_pixel_to_image.c \
	  my_puts.c \
	  error.c \
	  calc.c \
	  tools.c \
	  mlx.c \
	  draw_line.c

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):  $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LIB)

save:
	$(RM) ../cpy/*
	cp ./* ../cpy

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean flclean re