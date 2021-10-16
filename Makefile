NAME = libft.a
CFLAG = -Wall -Wextra -Werror
FUNCS = ft_isalnum.c ft_atoi.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_itoa.c ft_split.c ft_isprint.c ft_strlen.c ft_tolower.c ft_strtrim.c ft_toupper.c ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strlcat.c ft_strlcpy.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strcmp.c
OBJ = ${FUNCS:.c=.o}
RM = rm -f
CC = gcc

.c.o:
	${CC} ${CFLAG} -I includes -c $< -o ${<:.c=.o} ${CFLAG}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

all: ${NAME} ${FUNCS}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re