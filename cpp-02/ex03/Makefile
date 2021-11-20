# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 15:44:26 by iharchi           #+#    #+#              #
#    Updated: 2021/11/20 18:19:15 by iharchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSP

SRCS = main.cpp Fixed.cpp Point.cpp bsp.cpp

FLAGS = -Wall -Werror -Wextra --std="c++98"

all: $(NAME)
$(NAME): 
		clang++ $(FLAGS) $(SRCS) -o $(NAME)
clean:
	
fclean: clean
		rm -rf $(NAME)
re: fclean all

.PHONY: all clan fclean re 