SRCS = inst1.c\
	inst2.c\
	inst3.c\
	main.c\
	sort.c\
	sort2.c\
	sort3.c\
	utils.c\
	utils2.c\
	utils3.c\
	split.c

NAME = push_swap

all: ${NAME}

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rc
OBJS = ${SRCS:.c=.o}

${NAME}: ${SRCS} ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclen re
