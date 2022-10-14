#ifndef WRONGCAT_H
# define WRONGCAT_H
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
        WrongCat();
        ~WrongCat(void);
        WrongCat(WrongCat const &src);
        WrongCat & operator=(WrongCat const & rhs);
        void makeSound() const;
    private:
        std::string type;
};

#endif