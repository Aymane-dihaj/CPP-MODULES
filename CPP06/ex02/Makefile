NAME = identify
CXX = c++
CXXFLAGS = -Wextra -Werror -Wall -std=c++98
RM = rm -f
SRC = main.cpp \
		Base.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
