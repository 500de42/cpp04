NAME = Animal
SRCS = main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp
FLAGS = -Wall -Werror -Wextra -std=c++98


all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $@

clean :

fclean : clean
	rm -rf $(NAME)

re : fclean all
