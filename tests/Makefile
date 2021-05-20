##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	unit_tests

CFLAGS	=	-I ../include/ -lcriterion -coverage

all:	$(NAME)

$(NAME):	$(SRC)
	$(CC) -o $(NAME) $(SRC) ../lib/my/*.c ../file_reader.c ../file_reader2.c ../minor_deleter.c $(CFLAGS)
	./$(NAME)
	gcovr

clean:
	$(RM) *.o
	$(RM) *.gcda
	$(RM) *.gcno

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.Phony: all clean fclean re
