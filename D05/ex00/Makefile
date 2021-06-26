# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/26 13:23:10 by majermou          #+#    #+#              #
#    Updated: 2021/06/26 15:51:30 by majermou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CC = clang++

flags = -std=c++98 -Wall -Wextra -Werror

SRC = $(wildcard *.cpp)

OBJECTS = $(SRC:%.cpp=%.o)

all:${NAME}

${NAME}:${OBJECTS}
		@${CC} $^ -o $@
		@echo "\033[0;32m\n--->  Bureaucrat Successfully Created.\n\033[0m"

%.o: %.cpp
		@${CC} ${flags} -c $< -o $@

clean:
		@rm -rf ${OBJECTS}
		@echo "\033[0;31m\n--->  Removing Objects...\n\033[0m"

fclean: clean
		@rm -rf ${NAME}
		@echo "\033[0;31m\n--->  Removing Binaries...\n\033[0m"

re: fclean all