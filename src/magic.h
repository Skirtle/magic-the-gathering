#pragma once
#include <iostream>
#include <string>
#include <vector>

class Card
{
public:
    std::string getName();
    void setName(std::string name);
protected:
    std::string name;
};

class Creature : public Card {
private:
    // attributes
    int basePower, baseToughness;
    std::vector<std::string> subtypes;
public:
    // methods
    int getBasePower();
    int getBaseToughness();
    std::vector<std::string> getSubtypes();
    void setBasePower(int power);
    void setBaseToughness(int toughness);
    void setSubtypes(std::vector<std::string>);
};