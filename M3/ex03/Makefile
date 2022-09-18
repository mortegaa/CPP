# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 12:06:11 by mortega-          #+#    #+#              #
#    Updated: 2022/09/18 12:25:16 by test             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			srcs/ClapTrap.cpp \
			srcs/ScavTrap.cpp \
			srcs/FlagTrap.cpp \
			srcs/DiamondTrap.cpp

OBJS	=	${SRCS:.cpp=.o}

CFLAGS	=	-Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98 -pedantic

.cpp.opp:
			@clang++ ${CFLAGS} -c $< -o ${<:.cpp=.o}

NAME	=	DiamondTrap

all:		${NAME}

$(NAME):	${OBJS}
			@clang++ -o ${NAME} ${OBJS}

clean:
		@rm -f ${OBJS}

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
