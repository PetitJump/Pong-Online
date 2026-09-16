
CC = gcc

CFLAGS = -Wall -Wextra -lcsfml-graphics -lcsfml-window -lcsfml-system

CPPFLAGS = -I ./include

SRC = src/main.c \
	src/create.c \
	src/run.c \
	src/move_raquette.c \
	src/draw.c \

	
NAME = main

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CPPFLAGS) $(CFLAGS)

clean : # Supprime les fichiers en .o
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) 

re : fclean all

.PHONY : re fclean clean all