##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	src/check.c \
		src/engine.c \
		src/instances.c \
		src/main.c

CFLAGS	=	-Wall -Wextra

INCLUDE =	-I include -o

LIB	=	-g -lm

NAME	=	107transfer

TESTS	=	tests

all:	$(NAME)

$(NAME):
	make -C $(TESTS)
	gcc $(SRC) $(CFLAGS) $(INCLUDE) $(NAME) $(LIB)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
