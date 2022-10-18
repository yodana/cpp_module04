#include <iostream>
#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Character.hpp"

Character::Character():_name("default_name"){
     for(int i = 0; i < 5; i++){
        this->_inventory[i] = NULL;
    }
    return ;
}

Character::Character(std::string name):_name(name){
    for(int i = 0; i < 4; i++){
        this->_inventory[i] = NULL;
    }
}

Character::Character(Character const &src){
    *this = src;
}

Character::~Character(void){
    return ;
}

Character& Character::operator=(Character const & rhs){
    if (this != &rhs){
    }
    return *this;
}

std::string const & Character::getName() const{
    return this->_name;
}

void Character::equip(AMateria* m){
     for(int i = 0; i < 4; i++){
        if (this->_inventory[i] == NULL){
            this->_inventory[i] = m;
            return ;
        }
    }
    return ;
}

void Character::unequip(int idx){
    if (idx < 4 && this->_inventory[idx] != NULL){
        this->_inventory[idx] = NULL;
    }
    return ;
}

void Character::use(int idx, ICharacter& target){
    if(this->_inventory[idx] != NULL){
        this->_inventory[idx]->use(target);
    }
    return;
}