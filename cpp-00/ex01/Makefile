# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 15:44:26 by iharchi           #+#    #+#              #
#    Updated: 2021/11/09 13:58:57 by iharchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = myPhoneBook

SRCS = phonebook.cpp contact.cpp main.cpp

FLAGS = -Wall -Werror -Wextra --std="c++98"

all: $(NAME)
$(NAME): 
		clang++ $(FLAGS) $(SRCS) -o $(NAME)
clean:
	
fclean: clean
		rm -rf $(NAME)
re: fclean all

.PHONY: all clan fclean re 