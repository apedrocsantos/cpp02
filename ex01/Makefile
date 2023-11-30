CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex00

OBJS =	main.cpp\
		Fixed.cpp\

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(NAME) -g

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
