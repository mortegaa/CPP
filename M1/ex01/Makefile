# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 12:06:11 by mortega-          #+#    #+#              #
#    Updated: 2022/06/20 23:36:06 by mortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	megaphone.cpp

OBJS	=	${SRCS:.cpp=.o}

CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic

.cpp.opp:
			@clang++ ${CFLAGS} -c $< -o ${<:.cpp=.o}

NAME	=	megaphone

all:		${NAME}

$(NAME):	${OBJS}
			@clang++ -o ${NAME} ${OBJS}

clean:
		@rm -f ${OBJS}

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
