# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 12:06:11 by mortega-          #+#    #+#              #
#    Updated: 2023/03/26 14:08:02 by mortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp srcs/ClapTrap.cpp srcs/ScavTrap.cpp srcs/FlagTrap.cpp

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic

NAME	=	FlagTrap

all:		${NAME}

$(NAME):
			@clang++ ${CXXFLAGS} -o ${NAME} ${SRCS}

clean:
		@rm -f ${OBJS}

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
