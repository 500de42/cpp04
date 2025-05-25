#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &src)
{
    std::cout << "Brain copy assigment constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        this->ideas[i] = src.ideas[i];
    }
    return *this;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        this->ideas[i] = copy.ideas[i];
    }
}

std::string Brain::getIdea(int i) const
{
    std::cout << "Brain getIdea called" << std::endl;
    return this->ideas[i];
}

void Brain::setIdea(const std::string s, int i)
{
    std::cout << "Brain setIdea called" << std::endl;
    this->ideas[i] = s[i];
}

Brain::~Brain()
{
    std::cout << "Brain default destructor called" << std::endl;
}