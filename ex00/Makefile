CC = c++

CFLAGS = -Wall -Wextra -Werror 

NAME = Animal

SRCS = $(wildcard *.cpp)

HEADERS = $(wildcard *.hpp)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re
