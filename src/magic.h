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
protected:
    // attributes
    int base_power, base_toughness;
    std::vector<std::string> subtypes;
    short* mana_cost;
public:
    // methods
    int getBasePower();
    int getBaseToughness();
    std::vector<std::string> getSubtypes();
    short* getMana();
    void setBasePower(int power);
    void setBaseToughness(int toughness);
    void setSubtypes(std::vector<std::string>);
    void setManaCost(short* mana_cost);
};

class Sorcery : public Card
{
public:
    Sorcery();
    std::string getEffect();
    short* getManaCost();
    void setEffect(std::string effect);
    void setManaCost(short* mana_cost);
protected:
    short* mana_cost;
    std::string effect;
};