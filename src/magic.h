#pragma once
#include <iostream>
#include <string>
#include <vector>

class Card
{
public:
    std::string getName();
    std::string getText();
    void setName(std::string name);
    void setText(std::string text);
protected:
    std::string name;
    std::string cardText;
};

class Castable
{
public:
    Castable();
    short* getManaCost();
    void setManaCost(short* mana_cost); 
protected:
    short* mana_cost;
};

class Creature : public Card, public Castable {
protected:
    // attributes
    int base_power, base_toughness;
    std::vector<std::string> subtypes;
    short* mana_cost;
public:
    // methods
    Creature();
    int getBasePower();
    int getBaseToughness();
    std::vector<std::string> getSubtypes();
    void setBasePower(int power);
    void setBaseToughness(int toughness);
    void setSubtypes(std::vector<std::string>);
};

class Sorcery : public Card, public Castable
{
public:
protected:
};