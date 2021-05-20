##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## projet solo 1
##
SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME 	=	bsq

CFLAGS	=	-I./include/

LDFLAGS =	-lmy -L./lib/my/

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my/
	$(CC) -g -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) ./lib/my/*~
	$(RM) *~
	$(RM) $(OBJ)
	$(MAKE) -C ./lib/my/ clean
	$(MAKE) -C ./tests/ clean

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my/ fclean
	$(MAKE) -C ./tests/ fclean

re:	fclean all

lib/libmy.a:
	$(MAKE) -C ./lib/my/

tests_run:	fclean
	$(MAKE) -C ./tests/

.Phony: all clean fclean re
