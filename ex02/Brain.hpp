#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "animal.hpp"
#include <iostream>

class Brain
{
    private :
        std::string ideas[100];
    public :
        Brain();
        ~Brain();
        Brain &operator=(const Brain &src);
        Brain(const Brain &copy);
		void setIdea(const std::string s, int i);
		std::string getIdea(int i) const;
};

#endif