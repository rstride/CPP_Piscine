# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 16:22:34 by rstride           #+#    #+#              #
#    Updated: 2023/06/12 12:54:30 by rstride          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	Bureaucrat

DEF_COLOR	=	\033[0;39m
ORANGE		=	\033[0;33m
GRAY		=	\033[0;90m
RED			=	\033[0;91m
GREEN		=	\033[1;92m
YELLOW		=	\033[1;93m
BLUE		=	\033[0;94m
MAGENTA		=	\033[0;95m
CYAN		=	\033[0;96m
WHITE		=	\033[0;97m

OBJ_PATH = obj/

SRCS    =   main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Intern.cpp
OBJ     =   $(SRCS:.cpp=.o)
OBJS    =   $(addprefix $(OBJ_PATH), $(OBJ))
INCS    =   -I ./inc/

all: $(OBJ_PATH) $(NAME) 

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS) 
	@echo "$(GREEN)Compiling:$(DEF_COLOR) $<"

$(OBJ_PATH):
	mkdir $(OBJ_PATH)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_PATH)
	@echo "$(MAGENTA)Deleting:$(DEF_COLOR) $(OBJS)"

fclean: clean
	rm -rf $(NAME)
	@echo "$(RED)Deleting:$(DEF_COLOR) $(NAME)"

re: fclean all

.PHONY: all clean fclean re 