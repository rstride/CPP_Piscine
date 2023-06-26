# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
<<<<<<< HEAD
#    Created: 2023/06/26 14:51:02 by rstride           #+#    #+#              #
#    Updated: 2023/06/26 14:52:21 by rstride          ###   ########.fr        #
=======
#    Created: 2023/04/03 16:22:34 by rstride           #+#    #+#              #
#    Updated: 2023/06/20 20:08:37 by rstride          ###   ########.fr        #
>>>>>>> refs/remotes/origin/main
#                                                                              #
# **************************************************************************** #

SRCS = ./Bureaucrat.cpp \
	./Form.cpp \
	./PresidentPardonForm.cpp \
	./RobotomyRequestForm.cpp \
	./ShrubberyCreationForm.cpp \
	./main.cpp

CC = c++
NAME = Forms

CFLANG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)


<<<<<<< HEAD
all: $(NAME)
=======
SRCS    =   main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp 
OBJ     =   $(SRCS:.cpp=.o)
OBJS    =   $(addprefix $(OBJ_PATH), $(OBJ))
INCS    =   -I ./inc/

all: $(OBJ_PATH) $(NAME) 

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS) 
	@echo "$(GREEN)Compiling:$(DEF_COLOR) $<"

$(OBJ_PATH):
	mkdir $(OBJ_PATH)
>>>>>>> refs/remotes/origin/main

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re