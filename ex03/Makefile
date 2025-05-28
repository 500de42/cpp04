NAME = a.out
SRCS = srcs/main.cpp srcs/AMateria.cpp srcs/Character.cpp srcs/Cure.cpp srcs/Ice.cpp \
srcs/Icharacter.cpp srcs/MateriaSource.cpp
FLAGS = -Wall -Werror -Wextra -std=c++98 -g3


all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $@

clean :

fclean : clean
	rm -rf $(NAME)

re : fclean all
