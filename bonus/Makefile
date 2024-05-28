NAME = ../so_long_bonus
CC = cc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f
SRC_FILES = main_bonus.c \
game/ft_put_player_bonus.c game/ft_move_demon_bonus.c game/ft_flood_fill_bonus.c game/ft_put_coin_4_bonus.c game/ft_animate_bonus.c  game/ft_animate_coins_bonus.c game/ft_draw_floor_bonus.c game/ft_handle_click_bonus.c game/ft_show_game_bonus.c game/ft_init_game_bonus.c  game/ft_clean_and_exit_bonus.c  game/ft_init_images_bonus.c game/ft_end_game_bonus.c\
game/ft_print_movements_bonus.c game/ft_setup_map_bonus.c game/ft_update_map_bonus.c game/ft_update_player_bonus.c game/ft_handle_close_win_bonus.c\
movements/ft_move_down_bonus.c movements/ft_move_left_bonus.c movements/ft_move_right_bonus.c movements/ft_move_up_bonus.c movements/ft_move_player_bonus.c \
validation/ft_add_map_bonus.c validation/ft_check_map_content_bonus.c \
validation/ft_check_map_path_bonus.c\
validation/ft_check_map_size_bonus.c\
validation/ft_check_map_walls_bonus.c\
validation/ft_read_map_information_bonus.c \
validation/ft_validate_extention_bonus.c \
validation/ft_validate_map_information_bonus.c \
validation/ft_validate_map_bonus.c 
OBJ=$(SRC_FILES:.c=.o)
HEADER = so_long.h
LIBS =  ../lib/lib.a -lmlx -framework OpenGL -framework AppKit
# // libmlx42.a libglfw3.a
all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	cd .. && make -C lib
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME) 

clean:
	cd .. && cd lib && make clean
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	cd .. && cd lib && make fclean

re: fclean all

.PHONY: all clean fclean re