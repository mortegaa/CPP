# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 12:06:11 by mortega-          #+#    #+#              #
#    Updated: 2022/07/02 16:54:22 by mortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp srcs/ClapTrap.cpp srcs/ScavTrap.cpp

OBJS	=	${SRCS:.cpp=.o}

CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic

.cpp.opp:
			@clang++ ${CFLAGS} -c $< -o ${<:.cpp=.o}

NAME	=	ClapTrap

all:		${NAME}

$(NAME):	${OBJS}
			@clang++ -o ${NAME} ${OBJS}

clean:
		@rm -f ${OBJS}

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
