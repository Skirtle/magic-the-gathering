#pragma once
#include <iostream>
#include <string>
#include <vector>

class Card
{
public:
    bool isLegendary();
    std::string getName();
    std::string getText();
    void setName(std::string name);
    void setText(std::string text);
    void setLegendary(bool status);
protected:
    std::string name;
    std::string cardText;
    bool legendary;
};

class Castable
{
public:
    std::string getManaCost();
    void setManaCost(std::string mana_cost);
protected:
    std::string mana_cost;
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

class Sorcery : public Card, public Castable {};

class Instant : public Card, public Castable {};

class Plansewalker : public Card, public Castable {
private:
    int loyality;
public:
    int getLoyalty();
    void addLoyalty(int dx);
    void setLoyalty(int loyalty);
};