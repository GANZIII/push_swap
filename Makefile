SRCS = inst1.c\
	inst2.c\
	inst3.c\
	main.c\
	sort.c\
	sort2.c\
	sort3.c\
	utils.c\
	utils2.c

PS = push_swap

${NAME}: ${PS}

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rc
OBJS = ${SRCS:.c=.o}

${NAME}: ${PS}
	${AR} $@ $?

${PS}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${PS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	${RM} ${PS}

re: fclean all

.PHONY: all clean fclen re