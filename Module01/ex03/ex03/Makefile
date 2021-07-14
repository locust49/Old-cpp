CMPL		=	clang++
CPP			=	-std=c++98
FLGS		=	-Wall -Wextra -Werror

NAME		=	war

HDRS		= -I.
FILENAMES	=	Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

SRC_DIR		=	.
OBJ_DIR 	=	objects

SRCS		=	$(addprefix $(SRC_DIR)/, $(FILENAMES))
OBJS		=	$(addprefix $(OBJ_DIR)/, $(FILENAMES:.cpp=.o))

all: $(NAME)

$(NAME):	$(OBJS)
		$(CMPL) $(FLGS) $(CPP) -o $(NAME) $(SRCS) $(HDRS) $(LBIN)

$(OBJS): $(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(HDR) | $(OBJ_DIR)
		@$(CMPL) $(HDRS) $(FLAGS) -c $< -o $@ 

$(OBJ_DIR):
		@mkdir $(OBJ_DIR)

clean:
		@rm -rf  $(OBJ_DIR)

fclean: clean
		@rm -f $(NAME)

re: fclean all
