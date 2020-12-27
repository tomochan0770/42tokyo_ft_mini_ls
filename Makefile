NAME = ft_mini_ls

CC = gcc
INCLUDE = -I include
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)

SRC_DIR = srcs/

SRC_NAME = 
SRC_NAME += count_dir.c
SRC_NAME += ft_putstr_fd.c
SRC_NAME += main.c
SRC_NAME += set_info.c
SRC_NAME += sort_mtime.c
SRC_NAME += swap_info.c
SRC_NAME += print_name.c
SRC_NAME += all_free.c 
SRC_NAME += ft_strdup.c
SRC_NAME += ft_strlen.c

SRCS = $(addprefix $(SRC_DIR), $(SRC_NAME))
OBJS = $(SRCS:%c=%o)

$NAME:		$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
