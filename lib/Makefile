NAME = lib.a
HEADER = lib.h
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRC = ft_strchr.c ft_strlen.c ft_split_dil.c  ft_count_words_dil.c ft_split.c ft_count_words.c  ft_is_space.c ft_strnstr.c ft_print.c \
ft_free_split.c ft_substr_dil.c ft_substr.c  ft_split_count.c ft_strjoin.c ft_join_three.c ft_strdup.c ft_is_quote.c \
ft_count_allocation.c ft_skip_space.c ft_skip_quotes.c ft_count_quote_allocation.c ft_error_exit.c ft_command_not_found.c \
ft_strncmp.c ft_strrchr.c get_next_line/get_next_line.c  get_next_line/get_next_line_utils.c ft_strcmp.c ft_flood_fil.c ft_itoa.c \
ft_printf/ft_printf.c ft_printf/handle_numbers.c ft_printf/handle_strs.c ft_printf/bonus_part.c  ft_printf/utils.c ft_printf/bonus_partv1.c
OBJ = $(SRC:.c=.o)
RM = rm -rf
AR = ar rcs

%.o : %.c HEADER
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR)  $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all fclean clean re
