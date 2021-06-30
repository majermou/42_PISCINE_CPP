# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 10:32:46 by majermou          #+#    #+#              #
#    Updated: 2021/06/29 10:41:50 by majermou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization

CC = clang++

flags = -std=c++98 -Wall -Wextra -Werror

SRC = $(wildcard *.cpp)

OBJECTS = $(SRC:%.cpp=%.o)

all:${NAME}

${NAME}:${OBJECTS}
		@${CC} $^ -o $@
		@echo "\033[0;32m\n--->  convert Successfully Created.\n\033[0m"

%.o: %.cpp
		@${CC} ${flags} -Includes/ -c $<  -o $@

clean:
		@rm -rf ${OBJECTS}
		@echo "\033[0;31m\n--->  Removing Objects...\n\033[0m"

fclean: clean
		@rm -rf ${NAME}
		@echo "\033[0;31m\n--->  Removing Binaries...\n\033[0m"

re: fclean all