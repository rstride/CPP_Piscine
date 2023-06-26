# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/26 00:03:27 by rstride           #+#    #+#              #
#    Updated: 2023/06/26 00:03:28 by rstride          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Macro Variables 
CXXFLANGS = -Wall -Wextra -Werror -std=c++98
CXX=c++ $(CXXFLANGS)

# Custom Variables
SRCS = ./main.cpp \
	./span.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Span

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
