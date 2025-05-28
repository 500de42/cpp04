NAME = Animal
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp
FLAGS = -Wall -Werror -Wextra -std=c++98 -g 


all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $@

clean :

fclean : clean
	rm -rf $(NAME)

re : fclean all
