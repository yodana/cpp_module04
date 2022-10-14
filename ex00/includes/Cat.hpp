#ifndef CAT_H
# define CAT_H
#include <iostream>

class Cat: public Animal{
    public:
        Cat();
        ~Cat(void);
        Cat(Cat const &src);
        Cat & operator=(Cat const & rhs);
        void makeSound();
    private:
        std::string type;
};

#endif