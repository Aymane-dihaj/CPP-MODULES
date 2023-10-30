NAME = Animal

SRCS = 	Animal.cpp \
		WrongAnimal/WrongAnimal.cpp \
		Dog/Dog.cpp \
		Cat/Cat.cpp \
		WrongCat/WrongCat.cpp \
		main.cpp \

OBJS = ${SRCS:.cpp=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re