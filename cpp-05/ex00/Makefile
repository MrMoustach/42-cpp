# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 15:44:26 by iharchi           #+#    #+#              #
#    Updated: 2021/11/22 03:15:16 by iharchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRCS = main.cpp Bureaucrat.cpp

FLAGS = -Wall -Werror -Wextra --std="c++98"

all: $(NAME)
$(NAME): 
		clang++ $(FLAGS) $(SRCS) -o $(NAME)
clean:
	
fclean: clean
		rm -rf $(NAME)
re: fclean all

.PHONY: all clan fclean re 