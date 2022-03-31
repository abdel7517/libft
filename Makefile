all: programme
	./programme

programme: main.c
	gcc -Wall -Wextra -Werror ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c ft_strlen.c  main.c -o programme -lm