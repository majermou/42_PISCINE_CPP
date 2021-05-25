# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/22 16:10:37 by majermou          #+#    #+#              #
#    Updated: 2021/05/25 11:57:35 by majermou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = crappyPhonebook

CC = clang++

flags = -std=c++98 -Wall -Wextra -Werror

SRC = Contact.cpp

OBJECTS = Contact.o ${NAME}.o

all: ${NAME}

${NAME}:${OBJECTS}
		@${CC} ${flags} ${OBJECTS} -o $@
		@echo "\033[0;32mcrappyPhonebook Successfully Created."
	
%.o: %.cpp
		@${CC} ${flags} -c $< -o $@
		
clean:
		@rm -rf ${OBJECTS}
		@echo "\033[0;31mRemoving Objects..."

fclean: clean
		@rm -rf ${NAME}
		@echo "\033[0;31mRemoving Binaries..."

re: fclean all