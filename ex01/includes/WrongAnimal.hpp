#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
#include <iostream>

class WrongAnimal{
    public:
        WrongAnimal();
        ~WrongAnimal(void);
        WrongAnimal(WrongAnimal const &src);
        WrongAnimal & operator=(WrongAnimal const & rhs);
        void makeSound() const;
        std::string getType() const;
        void setType(std::string type);

    private:
        std::string type;
};

#endif