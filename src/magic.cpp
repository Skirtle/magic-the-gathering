#include "magic.h"
#include <iostream>
#include <string>
#include <vector>

std::string Card::getName()
{
    return this->name;
}

void Card::setName(std::string name)
{
    this->name = name;
}

// Dalton's work
int Creature::getBasePower() { return basePower; }
int Creature::getBaseToughness() { return baseToughness; }
std::vector<std::string> Creature::getSubtypes() { return subtypes; }
void Creature::setBasePower(int power) { this->basePower = power; }
void Creature::setBaseToughness(int toughness) { this->baseToughness = toughness; }
void Creature::setSubtypes(std::vector<std::string> subtypes) {this->subtypes = subtypes; }