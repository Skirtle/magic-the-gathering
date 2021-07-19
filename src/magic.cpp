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

Sorcery::Sorcery() {this->mana_cost = (short*)calloc(6, sizeof(short));}
std::string Sorcery::getEffect() { return this->effect;}
short* Sorcery::getManaCost() { return this->mana_cost;}
void Sorcery::setEffect(std::string effect) { this->effect = effect;}
void Sorcery::setManaCost(short* mana_cost) { this->mana_cost = mana_cost;}
