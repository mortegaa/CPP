# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 12:06:11 by mortega-          #+#    #+#              #
#    Updated: 2023/04/29 19:37:11 by mortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			srcs/Bureaucrat.cpp \
			srcs/Form.cpp \
			srcs/ShrubberyCreationForm.cpp \
			srcs/RobotomyRequestForm.cpp \
			srcs/PresidentialPardonForm.cpp \
			srcs/Intern.cpp

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic

NAME	=	bureau

all:		${NAME}

$(NAME):
			@clang++ ${CXXFLAGS} -o ${NAME} ${SRCS}

clean:
		@rm -f ${OBJS}

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
