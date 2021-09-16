# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 17:07:09 by ymarji            #+#    #+#              #
#    Updated: 2021/09/14 14:41:56 by ymarji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = whatever
HEADER = whatever.hpp
SRC = main.cpp 

all : $(NAME)

$(NAME) : $(SRC) $(HEADER)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean :
	@rm -rf $(NAME)

re : fclean all