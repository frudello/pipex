NAME_PUSH	= push_swap
# NAME_BONUS	= checker

CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror

PUSH_SRCS =

# BONUS_SRCS =

PUSH_OBJS	= ${PUSH_SRCS:.c=.o}

BONUS_OBJS	= ${BONUS_SRCS:.c=.o}

%.o: %.c
			$(CC) ${CFLAGS} -c $< -o $@

all:		push_swap

push_swap:  ${PUSH_OBJS}
			$(CC) ${CFLAGS} -o ${NAME_PUSH} ${PUSH_OBJS}

clean:
			rm -f *.o
			rm -f ./*/*.o

fclean: 	clean
			rm -f $(NAME_PUSH)
			rm -f $(NAME_CHECKER)

re: fclean all bonus

.PHONY: all clean fclean re push_swap
