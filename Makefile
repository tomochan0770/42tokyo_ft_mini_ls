NAME = ft_mini_ls

CC = gcc
INCLUDE = -I includes
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)

SRC_DIR = srcs/

SRCS_NAME =
SRCS_NAME += cnt_indir.c
SRCS_NAME += ft_putstr_fd.c
SRCS_NAME += main.c
SRCS_NAME += print_name.c
SRCS_NAME += set_info.c
SRCS_NAME += swap_info.c
SRCS_NAME += bubble_sort.c
SRCS_NAME += ft_strlen.c
SRCS_NAME += ft_strdup.c
SRCS_NAME += cmp_mtime.c
SRCS_NAME += cmp_nsec.c
SRCS_NAME += cmp_name.c
SRCS_NAME += free_all.c

SRCS = $(addprefix $(SRC_DIR), $(SRCS_NAME))
OBJS = $(SRCS:%c=%o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
