NAME = Animal
SRCS = main.cpp AMateria.cpp 
FLAGS = -Wall -Werror -Wextra -std=c++98


all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $@

clean :

fclean : clean
	rm -rf $(NAME)

re : fclean all
