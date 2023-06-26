# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/26 14:51:35 by rstride           #+#    #+#              #
#    Updated: 2023/06/26 14:52:21 by rstride          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./Bureaucrat.cpp \
	./Form.cpp \
	./PresidentPardonForm.cpp \
	./RobotomyRequestForm.cpp \
	./ShrubberyCreationForm.cpp \
	./Intern.cpp \
	./main.cpp

CC = c++
NAME = Intern

CFLANG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re