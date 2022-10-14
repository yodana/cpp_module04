#ifndef DOG_H
# define DOG_H
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog: public Animal{
    public:
        Dog();
        ~Dog(void);
        Dog(Dog const &src);
        Dog & operator=(Dog const & rhs);
        void makeSound() const;

    private:
        std::string type;
        Brain* _brain;
};

#endif