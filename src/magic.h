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