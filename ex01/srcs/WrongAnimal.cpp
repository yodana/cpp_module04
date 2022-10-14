#include <iostream>
#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal"){
    std::cout << "WrongAnimal is alive!" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal(void){
    std::cout << "WrongAnimal is dead!" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
    *this = src;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal song!" << std::endl;
}

std::string WrongAnimal::getType() const{
    return this->type;
}

void WrongAnimal::setType(std::string type){
    this->type = type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & rhs){
    if (this != &rhs){
    }
    return *this;
}