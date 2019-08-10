# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/08 20:23:47 by dagarcia          #+#    #+#              #
#    Updated: 2019/08/08 20:33:03 by dagarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

OSRCS = *.o


all: $(NAME)

$(NAME):
	gcc -c $(SRCS) -Wall -Wextra -Werror
	ar rcs $(NAME) $(OSRCS)

clean:
	/bin/rm -f $(OSRCS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
