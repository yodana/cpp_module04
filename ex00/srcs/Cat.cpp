#include <iostream>
#include "../includes/Cat.hpp"

Cat::Cat(){
    std::cout << "Cat is alive!" << std::endl;
    this->setType("Cat");
    return ;
}

Cat::~Cat(void){
    std::cout << "Cat is dead!" << std::endl;
    return ;
}

Cat::Cat(Cat const &src){
    *this = src;
}

void Cat::makeSound() const{
    std::cout << "Miaou!" << std::endl;
}

Cat& Cat::operator=(Cat const & rhs){
    if (this != &rhs){
        this->type = rhs.type;
    }
    return *this;
}