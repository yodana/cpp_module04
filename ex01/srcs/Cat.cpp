#include <iostream>
#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

Cat::Cat(){
    std::cout << "Cat is alive!" << std::endl;
    this->setType("Cat");
    this->_brain = new Brain();
    return ;
}

Cat::~Cat(void){
    std::cout << "Cat is dead!" << std::endl;
    delete this->_brain;
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
        this->_brain = rhs._brain;
    }
    return *this;
}