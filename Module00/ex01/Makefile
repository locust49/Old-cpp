CMPL		=	clang++
FLGS		=	-Wall -Wextra -Werror

NAME		=	crappy

HDRS		=	-Iheaders
FILENAMES	=	Contact.class.cpp Phonebook.class.cpp Tools.class.cpp main.cpp

SRC_DIR		=	sources
OBJ_DIR 	=	objects

SRCS		=	$(addprefix $(SRC_DIR)/, $(FILENAMES))
OBJS		=	$(addprefix $(OBJ_DIR)/, $(FILENAMES:.cpp=.o))

all: $(NAME)

$(NAME):	$(OBJS)
		$(CMPL) $(FLGS) -o $(NAME) $(SRCS) $(HDRS) $(LBIN)

$(OBJS): $(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(HDR) | $(OBJ_DIR)
		@$(CMPL) $(HDRS) $(FLAGS) -c $< -o $@ 

$(OBJ_DIR):
		@mkdir $(OBJ_DIR)

clean:
		@rm -rf  $(OBJ_DIR)

fclean: clean
		@rm -f $(NAME)

re: fclean all
