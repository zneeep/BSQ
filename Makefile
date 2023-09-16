##
## EPITECH PROJECT, 2021
## B-CPE-101-LYN-1-1-BSQ_Lucas
## File description:
## Makefile
##

SRC		= 	$(wildcard *.c **/*.c)

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-g3

NAME	=	bsq

$(NAME): $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -Iinclude/ -lm

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all