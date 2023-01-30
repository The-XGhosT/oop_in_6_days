NAME = Zombie
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm 

SRCS = main.cpp  Zombie.cpp zombieHorde.cpp
INCL = Zombie.hpp
OBJS = $(SRCS:.cpp=.o)

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