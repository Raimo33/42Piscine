# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: craimond <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 00:06:07 by craimond          #+#    #+#              #
#    Updated: 2023/08/10 00:06:08 by craimond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRCS	= do-op.c operazioni.c
NAME	= do-op
OBJS	=  ${SRCS:.c=.o}
HEADERS	= headers/

.c.o	:
		@gcc -Wall -Wextra -Werror -g -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		@gcc -Wall -Wextra -Werror -g -I ${HEADERS} ${OBJS} -o ${NAME}

all : ${NAME}


clean :
		@rm -f ${OBJS}

fclean : clean
		@rm -f ${NAME}

re : fclean all