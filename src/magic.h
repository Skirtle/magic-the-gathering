#pragma once
#include <iostream>
#include <string>
#include <vector>

class Card {
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

class Castable {
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

class Planeswalker : public Card, public Castable {
private:
    int loyalty;
public:
    Planeswalker();
    Planeswalker(int startingLoyalty);
    int getLoyalty();
    void addLoyalty(int dx);
    void setLoyalty(int loyalty);
    // TODO add abilities
};

class Artifact : public Card, public Castable {};

class Enchantment : public Card, public Castable {}; 

class Sorcery : public Card, public Castable {};

class Instant : public Card, public Castable {};

class Land : public Card {};

class Player {
protected:
    int lives;
public:
    void setLives(int lives);
    void addLives(int dx);
    int getLives();
    Player();
    Player(int lives);
};

class Game {
    // we can use a circular linked list to denote which players turn it is, and the order
    // head is the first player. tail is the last player
    // after the tail comes the head, it makes sense.
};

struct Node {
    Player* next;
    Player data;
    int alive;
    Node();
    Node(Player data);
    Node(Player data, Player *next);
};

class LinkedList {
private:
    Node head, tail;
public:
    LinkedList();
    LinkedList(Player player);
    void add(Node newNode);
};