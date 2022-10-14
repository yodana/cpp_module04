#include <iostream>
#include "../includes/WrongCat.hpp"

WrongCat::WrongCat():type("WrongCat"){
    std::cout << "WrongCat is alive!" << std::endl;
    return ;
}

WrongCat::~WrongCat(void){
    std::cout << "WrongCat is dead!" << std::endl;
    return ;
}

WrongCat::WrongCat(WrongCat const &src){
    *this = src;
}

void WrongCat::makeSound() const{
    std::cout << "WrongCat song!" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const & rhs){
    if (this != &rhs){
    }
    return *this;
}