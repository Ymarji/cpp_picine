# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 14:20:24 by ymarji            #+#    #+#              #
#    Updated: 2021/08/29 14:21:31 by ymarji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Animals
NAME_W = WrongAnimals
HEADER = Animal.hpp Species.hpp
SRC = Animal.cpp \
	Species.cpp \
	main.cpp

SRC_WRONG = Wrong/WrongAnimal.cpp \
	Wrong/main.cpp \
	Wrong/wrongSpecies.cpp

OBJ = $(SRC:.cpp=.o)
OBJ_WRONG = $(SRC_WRONG:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

wrong : $(OBJ_WRONG) $(HEADER_WRONG)
	$(CC) $(FLAGS) $(OBJ_WRONG) -o $(NAME_W)

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_WRONG)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(NAME_W)

re : fclean all