# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 12:56:30 by ide-albe          #+#    #+#              #
#    Updated: 2023/03/03 20:17:58 by ide-albe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc -g
NAME		= push_swap
LIBFTA		= libft/libft.a
CFLAGS		= -Wall -Wextra -Werror
SRC			= push_swap.c func1.c func2.c func3.c func4.c func5.c func6.c func7.c func8.c func9.c \
				func10.c func11.c func12.c func13.c func14.c func15.c func16.c func17.c func18.c
OBJ			= $(SRC:.c=.o)

all:		libft $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) $(LIBFTA) -o $(NAME)

libft:
			make -C ./libft all
clean:
			rm -rf $(OBJ)
			make -C libft clean

fclean:	
			rm -rf $(NAME)
			make -C libft fclean

vis:
			gcc -c $(CFLAGS) $(SRC)
	gcc *.o $(LIBFTA) -o $(NAME)
			python3 python_visualizer.py `ruby -e "puts (1...500).to_a.shuffle.join(' ')"`

re:

.PHONY:		libft