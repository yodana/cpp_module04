#ifndef ANIMAL_H
# define ANIMAL_H
#include <iostream>

class Animal{
    public:
        Animal();
        virtual ~Animal(void);
        Animal(Animal const &src);
        Animal & operator=(Animal const & rhs);
        virtual void makeSound() const;
        std::string getType() const;
        void setType(std::string type);

    private:
        std::string type;
};

#endif