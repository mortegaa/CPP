# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 12:06:11 by mortega-          #+#    #+#              #
#    Updated: 2023/01/29 11:37:47 by mortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp

OBJS	=	${SRCS:.cpp=.o}

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic

.cpp.opp:
			@clang++ ${CXXFLAGS} -c $< -o ${<:.cpp=.o}

NAME	=	reference

all:		${NAME}

$(NAME):	${OBJS}
			@clang++ -o ${NAME} ${OBJS}

clean:
		@rm -f ${OBJS}

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
