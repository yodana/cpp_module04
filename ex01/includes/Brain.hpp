#ifndef BRAIN_H
# define BRAIN_H
#include <iostream>

class Brain{
    public:
        Brain();
        ~Brain(void);
        Brain(Brain const &src);
        Brain & operator=(Brain const & rhs);
        std::string ideas[100];
};

#endif