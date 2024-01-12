CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex00

SRCS =	main.cpp\
		Fixed.cpp\


HPPS =	Fixed.hpp\

all: $(NAME)

$(NAME) : $(SRCS) $(HPPS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -g

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
