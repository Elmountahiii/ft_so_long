NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC_FILES = mandatory/main.c \
mandatory/validation/ft_validate_extention.c mandatory/validation/ft_validate_map.c \
mandatory/validation/ft_count_map_lines.c  mandatory/validation/ft_validate_map_content.c \
mandatory/validation/ft_valitade_line_content.c mandatory/debug/ft_print_map.c mandatory/debug/ft_print_line_content.c 
OBJ=$(SRC_FILES:.c=.o)
HEADER = mandatory/so_long.h
LIBS = libmlx42.a libglfw3.a lib/lib.a  -Iinclude -lm -framework Cocoa -framework OpenGL -framework IOKit

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	make -C lib
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME) 

clean:
	cd lib && make clean
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	cd lib && make fclean

re: fclean all

.PHONY: all clean fclean re