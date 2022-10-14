#include <iostream>
#include "../includes/Dog.hpp"

Dog::Dog(){
    std::cout << "Dog is alive! " << std::endl;
    this->setType("Dog");
    this->_brain = new Brain();
    return ;
}

Dog::~Dog(void){
    std::cout << "Dog is dead!" << std::endl;
    delete this->_brain;
    return ;
}

Dog::Dog(Dog const &src){
    *this = src;
}

void Dog::makeSound() const{
    std::cout << "Wouaf!" << std::endl;
}

Dog& Dog::operator=(Dog const & rhs){
    if (this != &rhs){
        this->type = rhs.type;
        this->_brain = rhs._brain;
    }
    return *this;
}