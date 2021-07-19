#include "magic.h"
#include <iostream>
#include <string>
#include <vector>

<<<<<<< HEAD
// Card Class Methods
std::string Card::getName() { return this->name;}
std::string Card::getText() { return this->cardText;}
void Card::setName(std::string name) { this->name = name;}
void Card::setText(std::string text) { this->cardText = text;}

// Castable Class Methods
Castable::Castable() { this->mana_cost = (short*)calloc(6, sizeof(short));}
short* Castable::getManaCost() { return this->mana_cost;}
void Castable::setManaCost(short* mana_cost) { this->mana_cost = mana_cost;}
=======
std::string Card::getName() { return this->name; }
void Card::setName(std::string name) { this->name = name; }
>>>>>>> c75ad6659d6784347ea05d4205ef4913680cec8c

// Creature Class Methods
Creature::Creature() { this->mana_cost = (short*)calloc(6, sizeof(short));}
int Creature::getBasePower() { return base_power; }
int Creature::getBaseToughness() { return base_toughness; }
std::vector<std::string> Creature::getSubtypes() { return subtypes; }
void Creature::setBasePower(int power) { this->base_power = power; }
void Creature::setBaseToughness(int toughness) { this->base_toughness = toughness; }
void Creature::setSubtypes(std::vector<std::string> subtypes) {this->subtypes = subtypes; }