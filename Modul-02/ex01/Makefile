SRC = $(shell find . -name '*.cpp')
OBJ = $(SRC:.c=.o)
FLAG = -Wall -Werror -Wextra
NAME = fixed

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(FLAG) $(OBJ) -o $(NAME)
clean:
	rm -rf $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all