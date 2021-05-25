# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/14 18:06:10 by majermou          #+#    #+#              #
#    Updated: 2021/05/25 11:58:21 by majermou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++

flags = -std=c++98 -Wall -Wextra -Werror

SRC = ${NAME}.cpp

OBJECTS = ${NAME}.o

all: ${NAME}

${NAME}:${OBJECTS}
		@${CC} $< -o $@
		@echo "\033[0;32mmegaphone Successfully Created."
	
%.o: %.cpp
		@${CC} ${flags} -o $@ -c $<
		
clean:
		@rm -rf ${OBJECTS}
		@echo "\033[0;31mRemoving Objects..."

fclean: clean
		@rm -rf ${NAME}
		@echo "\033[0;31mRemoving Binaries..."

re: fclean all