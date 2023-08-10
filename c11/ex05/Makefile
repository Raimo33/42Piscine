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
all: do-op

do-op:
	@cc -Wall -Wextra -Werror *.c -o do-op
	@rm -f do-op.o

clean:
	@rm -f do-op

re: clean all

.PHONY: all clean