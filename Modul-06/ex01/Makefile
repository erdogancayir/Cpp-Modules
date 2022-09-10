NAME = serialize
CFLAGS = -Wall -Wextra
RM = rm -rf
CC = c++

SRCS = $(shell find . -name "*.cpp")
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -g $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp	
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling..."

clean:
	@$(RM) $(OBJS)
	@echo "successfuly cleaned"

fclean: clean
	@$(RM) $(NAME)
	@echo "executable removed successfuly"

re: fclean all