NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f
SRC_FILES = mandatory/main.c \
mandatory/debug/ft_print_line_content.c mandatory/debug/ft_print_map.c \
mandatory/game/ft_put_player.c    mandatory/game/ft_draw_floor.c mandatory/game/ft_handle_click.c mandatory/game/ft_show_game.c mandatory/game/ft_init_game.c  mandatory/game/ft_clean_and_exit.c  mandatory/game/ft_init_images.c mandatory/game/ft_end_game.c\
mandatory/game/ft_print_movements.c mandatory/game/ft_setup_map.c mandatory/game/ft_update_map.c mandatory/game/ft_update_player.c mandatory/game/ft_handle_close_win.c\
mandatory/movements/ft_move_down.c mandatory/movements/ft_move_left.c mandatory/movements/ft_move_right.c mandatory/movements/ft_move_up.c mandatory/movements/ft_move_player.c \
mandatory/validation/ft_add_map.c mandatory/validation/ft_check_map_content.c \
mandatory/validation/ft_check_map_path.c\
mandatory/validation/ft_check_map_size.c\
mandatory/validation/ft_check_map_walls.c\
mandatory/validation/ft_read_map_information.c \
mandatory/validation/ft_validate_extention.c \
mandatory/validation/ft_validate_map_information.c \
mandatory/validation/ft_validate_map.c 
OBJ=$(SRC_FILES:.c=.o)
HEADER = mandatory/so_long.h
LIBS =  lib/lib.a minilibx/libmlx.a  -framework OpenGL -framework AppKit
# // libmlx42.a libglfw3.a
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