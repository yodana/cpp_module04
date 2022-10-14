#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"
#include <iostream>

int main( void ) {
    Animal* animaux[10];
    for(int i = 0; i < 5; i++){
        animaux[i] = new Cat();
    }
    for(int i = 5; i < 10; i++){
        animaux[i] = new Dog();
    }
    for(int i = 0; i < 10; i++){
        std::cout << animaux[i]->getType() << std::endl;
        delete animaux[i];
    }
    return 0;
}