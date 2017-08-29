NAME = libft.a
OPTIONS = -c -Wall -Wextra -Werror
SRCS = $(shell echo srcs/*.c)
OBJS = $(shell echo objs/*.o)

all: $(NAME)

$(NAME):
	gcc $(OPTIONS) $(SRCS)
	mkdir objs
	mv *.o objs
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -rf objs

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
