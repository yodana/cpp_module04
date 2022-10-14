#include <iostream>
#include "../includes/Dog.hpp"

Dog::Dog():type("Dog"){
    std::cout << "Dog is alive!" << std::endl;
    return ;
}

Dog::~Dog(void){
    std::cout << "Dog is dead!" << std::endl;
    return ;
}

Dog::Dog(Dog const &src){
    *this = src;
}

void Dog::makeSound(){
    std::cout << "Wouaf!" << std::endl;
}

Dog& Dog::operator=(Dog const & rhs){
    if (this != &rhs){
    }
    return *this;
}