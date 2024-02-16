NAME = get_next_line.a 
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = get_next_line.c get_next_line_utils.c
	
SRC_B = get_next_line_bonus.c get_next_line_utils_bonus.c

OBJ = $(SRC:.c=.o) 
OBJ_B = $(SRC_B:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ) 
	//La commande ar est l'utilitaire d'archivage sous UNIX/Linux, et elle est 
	utilisée ici avec les options rc pour créer une nouvelle archive ou la remplacer
	 si elle existe déjà (c), et pour ajouter les fichiers objets spécifiés (r).

%.o: %.c get_next_line.h // relink?????
	$(CC) $(CFLAGS) -c $< -o $@ 

bonus: $(OBJ_B)
	ar rc $(NAME) $(OBJ_B) 

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: clean
	rm -f $(NAME)

re: fclean all
