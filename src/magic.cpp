#include "magic.h"
#include <iostream>
#include <string>

// Base card class
class Card
{
public:
    std::string getName()
    {
        return this->name;
    }

    void setName(std::string name)
    {
        this->name = name;
    }
protected:
    std::string name;
};
