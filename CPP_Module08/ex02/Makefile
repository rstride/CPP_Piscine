# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/26 00:03:24 by rstride           #+#    #+#              #
#    Updated: 2023/06/26 00:03:25 by rstride          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Macro Variables 
CXXFLANGS = -Wall -Wextra -Werror -std=c++98
CXX=c++ $(CXXFLANGS)

# Custom Variables
SRCS = ./main.cpp \
	./mutantstack.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = mutantstack

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
