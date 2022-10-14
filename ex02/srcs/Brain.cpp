#include <iostream>
#include "../includes/Brain.hpp"

Brain::Brain(){
    std::cout << "Brain is alive!" << std::endl;
    return ;
}

Brain::~Brain(void){
    std::cout << "Brain is dead!" << std::endl;
    return ;
}

Brain::Brain(Brain const &src){
    *this = src;
}

Brain& Brain::operator=(Brain const & rhs){
    if (this != &rhs){
    }
    return *this;
}