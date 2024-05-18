NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
PREFIX = mandatory/
SRC_FILES = main.c 
SRC = $(addprefix $(PREFIX), $(SRC_FILES))
OBJ = $(SRC:.c=.o)
HEADER = mandatory/so_long.h
LIBS = libmlx42.a -lglfw -framework Cocoa -framework OpenGL -framework IOKit

all: $(NAME)


%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re