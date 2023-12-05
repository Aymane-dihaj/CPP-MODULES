NAME = ex03

SRCS = 	Bureaucrat.cpp \
		Intern.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		main.cpp \

OBJS = ${SRCS:.cpp=.o}

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)


$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(CPPFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re