CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex03

SRCS =	main.cpp\
		Fixed.cpp\
		Point.cpp\
		bsp.cpp\


HPPS =	Fixed.hpp\
		Point.hpp\

all: $(NAME)

$(NAME) : $(SRCS) $(HPPS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -g

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
