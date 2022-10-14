#include <iostream>
#include "../includes/Animal.hpp"

Animal::Animal():type("Animal"){
    std::cout << "Animal is alive!" << std::endl;
    return ;
}

Animal::~Animal(void){
    std::cout << "Animal is dead!" << std::endl;
    return ;
}

Animal::Animal(Animal const &src){
    *this = src;
}

void Animal::makeSound(){
    std::cout << "Animal song!" << std::endl;
}

std::string Animal::getType(){
    return this->type;
}

Animal& Animal::operator=(Animal const & rhs){
    if (this != &rhs){
    }
    return *this;
}