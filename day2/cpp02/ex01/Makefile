NAME = a.out

CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm 

SRC = Fixed.cpp main.cpp
INC = Fixed.hpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(INCL)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all 