#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected :
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        virtual void makeSound() const;
        virtual ~Animal();
        Animal &operator=(const Animal &src);
        Animal(const Animal &copy);
        std::string getType() const;
};

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string type);
        virtual ~Dog();
        Dog &operator=(const Dog &src);
        Dog(const Dog &copy);
        void makeSound() const;
};

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string type);
        virtual ~Cat();
        Cat &operator=(const Cat &src);
        Cat(const Cat &copy);
        void makeSound() const;
};

class WrongAnimal
{
    protected :
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &src);
        WrongAnimal(const WrongAnimal &copy);
        virtual void makeSound() const;
        std::string getType() const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        virtual ~WrongCat();
        WrongCat &operator=(const WrongCat &src);
        WrongCat(const WrongCat &copy);
};



#endif
