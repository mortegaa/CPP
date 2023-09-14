# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 12:06:11 by mortega-          #+#    #+#              #
#    Updated: 2023/03/26 12:41:52 by mortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			srcs/AMateria.cpp \
			srcs/MateriaSource.cpp \
			srcs/Character.cpp \
			srcs/Cure.cpp \
			srcs/Ice.cpp

CFLAGS	=	-W -Wall -Werror -Wextra -std=c++98 -pedantic

NAME	=	materia

all:		${NAME}

$(NAME):
			@clang++ -o ${NAME} ${SRCS}

clean:
		@rm -f ${OBJS}

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
