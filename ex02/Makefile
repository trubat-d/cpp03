# ------------------------------------- VARS ----------------------------------

NAME		=	fragtrap

SRC			=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS		=	$(SRC:.cpp=.o)

CC		=	c++

# -std=c++98 displays an error if an unauthorized function is left in the code
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98

EXE_NAME	=	-o $(NAME)

# ------------------------------------- RULES ---------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.cpp.o:
	${CC} ${CXXFLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re