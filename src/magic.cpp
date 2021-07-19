#include "magic.h"
#include <iostream>
#include <string>

std::string Card::getName()
{
    return this->name;
}

void Card::setName(std::string name)
{
    this->name = name;
}