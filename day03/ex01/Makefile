# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 14:20:24 by ymarji            #+#    #+#              #
#    Updated: 2021/08/29 14:36:00 by ymarji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Animals
HEADER = Animal.hpp Species.hpp Brain.hpp
SRC = Animal.cpp \
	Species.cpp \
	Brain.cpp \
	main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re : fclean all