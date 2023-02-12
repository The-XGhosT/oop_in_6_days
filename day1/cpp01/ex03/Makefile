NAME = Weapon

CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm 

SRC = HumanA.cpp  HumanB.cpp  main.cpp  Weapon.cpp
INC = HumanA.hpp  HumanB.hpp Weapon.hpp

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