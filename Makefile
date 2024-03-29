SRC = ./ft_memset.c \
	./ft_bzero.c \
	./ft_memcpy.c \
	./ft_memccpy.c\
	./ft_memmove.c\
	./ft_memchr.c \
	./ft_memcmp.c \
	./ft_strlen.c \
	./ft_strdup.c \
	./ft_strncpy.c \
	./ft_strcat.c \
	./ft_strncat.c \
	./ft_strlcat.c \
	./ft_strlcpy.c \
	./ft_strchr.c \
	./ft_strrchr.c \
	./ft_strstr.c\
	./ft_strnstr.c \
	./ft_strcmp.c \
	./ft_strncmp.c \
	./ft_atoi.c \
	./ft_isalpha.c \
	./ft_isalnum.c \
	./ft_isascii.c \
	./ft_isprint.c \
	./ft_isdigit.c \
	./ft_toupper.c \
	./ft_tolower.c \
	./ft_calloc.c \
	./ft_memalloc.c \
	./ft_strjoin.c \
	./ft_substr.c \
	./ft_strtrim.c \
	./ft_split.c  \
	./ft_itoa.c

OBJ = $(SRC:.c=.o)

CFLAGS += -Wextra -Werror -Wall

NAME =	libft.a

$(NAME): $(OBJ)
		 ar crs $(NAME) $(OBJ)

all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

exec: all
	 gcc test/ft_$(f).c -L. -lft 
	 ./a.out 