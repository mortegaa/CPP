# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 12:06:11 by mortega-          #+#    #+#              #
#    Updated: 2023/03/26 14:09:35 by mortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			srcs/ClapTrap.cpp \
			srcs/ScavTrap.cpp \
			srcs/FlagTrap.cpp \
			srcs/DiamondTrap.cpp

CXXFLAGS	=	-Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98 -pedantic

NAME	=	DiamondTrap

all:		${NAME}

$(NAME):
			@clang++ ${CXXFLAGS} -o ${NAME} ${SRCS}

clean:
		@rm -f ${OBJS}

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
