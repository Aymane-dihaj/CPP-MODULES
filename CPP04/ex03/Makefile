NAME = ex03

SRCS = 	AMateria.cpp \
		Character.cpp \
		Ice.cpp \
		Cure.cpp \
		MateriaSource.cpp \
		main.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re