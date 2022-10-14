#ifndef CAT_H
# define CAT_H
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal{
    public:
        Cat();
        ~Cat(void);
        Cat(Cat const &src);
        Cat & operator=(Cat const & rhs);
        void makeSound() const;
    private:
        std::string type;
        Brain* _brain;
};

#endif