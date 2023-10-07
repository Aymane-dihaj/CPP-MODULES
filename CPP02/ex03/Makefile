NAME = fixed

SRCS = 	Fixed.cpp \
		Point.cpp \
		bsp.cpp \
		main.cpp \

OBJS = ${SRCS:.cpp=.o}

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CPPFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re