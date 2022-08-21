CC = g++
FLAG = -Wall -Werror -Wextra
SRC = *.cpp
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
