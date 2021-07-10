CC = clang++
CPP = -std=c++98
FLAGS = -Wall -Werror -Wextra

NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

$(NAME):
	$(CC) $(FLAGS) $(CPP) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
