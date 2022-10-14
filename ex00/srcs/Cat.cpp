#include <iostream>
#include "../includes/Cat.hpp"

Cat::Cat():type("Cat"){
    std::cout << "Cat is alive!" << std::endl;
    return ;
}

Cat::~Cat(void){
    std::cout << "Cat is dead!" << std::endl;
    return ;
}

Cat::Cat(Cat const &src){
    *this = src;
}

void Cat::makeSound(){
    std::cout << "Miaou!" << std::endl;
}

Cat& Cat::operator=(Cat const & rhs){
    if (this != &rhs){
    }
    return *this;
}