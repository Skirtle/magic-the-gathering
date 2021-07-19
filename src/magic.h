#pragma once
#include <iostream>
#include <string>

class Card
{
public:
    std::string getName();
    void setName(std::string name);
protected:
    std::string name;
};
