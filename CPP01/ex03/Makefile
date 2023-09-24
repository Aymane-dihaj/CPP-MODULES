# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 16:22:22 by adihaj            #+#    #+#              #
#    Updated: 2023/09/19 16:23:49 by adihaj           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = run

SRCS = 	HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \
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