CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex03g

SRCS =	main.cpp\
		Fixed.cpp\


HPPS =	Fixed.hpp\
		Fixed.h\

all: $(NAME)

$(NAME) : $(SRCS) $(HPPS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -g

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
