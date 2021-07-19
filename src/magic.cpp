#include "magic.h"
#include <iostream>
#include <string>
#include <vector>

// Card Class Methods
std::string Card::getName() { return this->name;}
std::string Card::getText() { return this->cardText;}
void Card::setName(std::string name) { this->name = name;}
void Card::setText(std::string text) { this->cardText = text;}

// Castable Class Methods
Castable::Castable() { this->mana_cost = (short*)calloc(6, sizeof(short));}
short* Castable::getManaCost() { return this->mana_cost;}
void Castable::setManaCost(short* mana_cost) { this->mana_cost = mana_cost;}
void Castable::printManaCost()
{
    std::cout << this->mana_cost[0];
    for(int i = 1; i < 6; i++)
    {
        for (int j = 0; j < this->mana_cost[i]; j++)
        {
            switch(i)
            {
                case(1):
                    std::cout << "W";
                    break;
                case(2):
                    std::cout << "U";
                    break;
                case(3):
                    std::cout << "B";
                    break;
                case(4):
                    std::cout << "R";
                    break;
                case(5):
                    std::cout << "G";
                    break;
                default:
                    std::cerr << "\nerror has occure\n";
                    break;
            }
        }
    }
    std::cout << std::endl;
}

// Creature Class Methods
Creature::Creature() { this->mana_cost = (short*)calloc(6, sizeof(short));}
int Creature::getBasePower() { return base_power; }
int Creature::getBaseToughness() { return base_toughness; }
std::vector<std::string> Creature::getSubtypes() { return subtypes; }
void Creature::setBasePower(int power) { this->base_power = power; }
void Creature::setBaseToughness(int toughness) { this->base_toughness = toughness; }
void Creature::setSubtypes(std::vector<std::string> subtypes) {this->subtypes = subtypes; }