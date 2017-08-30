# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/30 09:48:52 by mcassar           #+#    #+#              #
#    Updated: 2017/08/30 09:49:07 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OPTIONS = -c -Wall -Wextra -Werror

SRCSDIR = srcs/
SRCSLIST =	ft_memset.c \
			ft_putchar.c \

SRCS = $(addprefix $(SRCSDIR), $(SRCSLIST))

OBJSLIST = $(patsubst %.c, %.o, $(SRCSLIST))
OBJSDIR = objs/

OBJS = $(addprefix $(OBJSDIR), $(OBJSLIST))

all: $(NAME)

$(NAME):
	@gcc $(OPTIONS) $(SRCS)
	@mkdir objs
	@mv *.o objs
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@printf "\e[0;32mMake rule Done !\n"
clean:
	@/bin/rm -rf objs
	@printf "\e[0;32mClean rule Done !\n"

fclean:
	@make clean
	@/bin/rm -f $(NAME)
	@printf "\e[0;32mFclean rule Done !\n"

re: fclean all
