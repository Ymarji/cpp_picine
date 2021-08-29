# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 14:20:24 by ymarji            #+#    #+#              #
#    Updated: 2021/08/29 14:45:40 by ymarji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Materia
HEADER = AMateria.hpp \
	Character.hpp \
	Cure.hpp \
	ICharacter.hpp \
	IMateriaSource.hpp \
	Ice.hpp \
	MateriaSource.hpp

SRC = AMateria.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	MateriaSource.cpp \
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