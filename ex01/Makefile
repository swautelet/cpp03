SRC = ClapTrap.cpp main.cpp ScavTrap.cpp
NAME = claptrap
CPPFLAGS = -Werror -Wextra -Wall -std=c++98
OBJ=$(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	g++ $(CPPFLAGS) $(OBJ) -o $(NAME)

.o:.cpp
	g++ -c $(CPPFLAGS) $? 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

save :
	git commit -am "$(MAKECMDGOALS)"
	git push

.phony : fclean clean re all