NAME = libft

#need changes in srcs
SRCS = *.c *.h

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I include -c $< -o $@

$(NAME): ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

.DEFAULT_GOAL := all
