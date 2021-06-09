# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 17:13:24 by majermou          #+#    #+#              #
#    Updated: 2021/06/08 17:23:06 by majermou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = clang++

flags = -std=c++98 -Wall -Wextra -Werror

SRC = ${NAME}.cpp

OBJECT = ${NAME}.o

all: ${NAME}

${NAME}:${OBJECT}
		@${CC} $< -o $@
		@echo "\033[0;32mreplace Successfully Created."
	
%.o: %.cpp
		@${CC} ${flags} -o $@ -c $<

clean:
		@rm -rf ${OBJECT}
		@echo "\033[0;31mRemoving Objects..."

fclean: clean
		@rm -rf ${NAME}
		@echo "\033[0;31mRemoving Binaries..."

re: fclean all