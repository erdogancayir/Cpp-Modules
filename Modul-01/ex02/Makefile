CC = g++
FLAG = -Wall -Werror -Wextra
SRC = $(shell find . -name '*.cpp')
NAME = zombie

all: $(NAME)

$(NAME):
	$(CC) $(FLAG) $(SRC) -o $(NAME) -I zombie.hpp

clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(OBJ)
	rm -rf $(NAME)
re: fclean all	
