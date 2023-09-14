# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 12:06:11 by mortega-          #+#    #+#              #
#    Updated: 2023/06/11 17:49:40 by mortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic

NAME	=	easyfind

all:		${NAME}

$(NAME):
			@clang++ ${CXXFLAGS} -o ${NAME} ${SRCS}

clean:
		@rm -f ${OBJS}

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
