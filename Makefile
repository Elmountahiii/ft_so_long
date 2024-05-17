NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
PREFIX = mandatory/
SRC_FILES = main.c 
SRC = $(addprefix $(PREFIX), $(SRC_FILES))
OBJ = $(SRC:.c=.o)
HEADER = mandatory/so_long.h

all: $(NAME)


%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re