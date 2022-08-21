NAME	= megaphone
CC		= g++
FLAG	= -Wall -Werror -Wextra
SRCDIR	= ./
SRC		= $(shell find $(SRCDIR) -name '*.cpp')

OBJDIR	= ./obj
OBJ		= $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: $(SRC)/%.c
	@mkdir -p $(@D)
	$(CC) -g $(CFLAGS) -c $< -o $@

test_case: $(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

clean:
	@rm -rf $(OBJDIR)
fclean:
	@rm -rf $(OBJDIR)
	@rm -f $(NAME)
re:	fclean all