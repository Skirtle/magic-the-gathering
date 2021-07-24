#include "magic.h"
#include <iostream>
#include <string>
#include <vector>

// Card Class Methods
bool Card::isLegendary() { return this->legendary;}
std::string Card::getName() { return this->name;}
std::string Card::getText() { return this->cardText;}
void Card::setName(std::string name) { this->name = name;}
void Card::setText(std::string text) { this->cardText = text;}
void Card::setLegendary(bool status) { this->legendary = status;}

// Castable Class Methods
std::string Castable::getManaCost() { return this->mana_cost;}
void Castable::setManaCost(std::string mana_cost) { this->mana_cost = mana_cost;}

// Creature Class Methods
Creature::Creature() { this->mana_cost = (short*)calloc(6, sizeof(short));}
int Creature::getBasePower() { return base_power; }
int Creature::getBaseToughness() { return base_toughness; }
std::vector<std::string> Creature::getSubtypes() { return subtypes; }
void Creature::setBasePower(int power) { this->base_power = power; }
void Creature::setBaseToughness(int toughness) { this->base_toughness = toughness; }
void Creature::setSubtypes(std::vector<std::string> subtypes) {this->subtypes = subtypes; }

// Planeswalker Class Methods
Planeswalker::Planeswalker() {this->loyalty = -1; }
Planeswalker::Planeswalker(int startingLoyalty) {this->loyalty = startingLoyalty; }
int Planeswalker::getLoyalty() {return this->loyalty; }
void Planeswalker::addLoyalty(int dx) {this->loyalty += dx; }
void Planeswalker::setLoyalty(int loyalty) {this->loyalty = loyalty; }

// Player class methods
void Player::setLives(int lives) {this->lives = lives; }
void Player::addLives(int dx) {this->lives += dx; }
int Player::getLives() {return this->lives; }
Player::Player() { this->setLives(-1); }
Player::Player(int lives) { this->setLives(lives); }

// Node struct methods
Node::Node() {
    this->next = nullptr;
    this->data = Player(-1);
    this->alive = NULL;
}
Node::Node(Player data) {
    this->next = nullptr;
    this->data = data;
    this->alive = 1;
}
Node::Node(Player data, Player *next) {
    this->next = next;
    this->data = data;
    this->alive = 1;
}

// Linked List class methods
LinkedList::LinkedList() {
    this->head = Node();
    this->tail = this->head;
}
LinkedList::LinkedList(Player player) {
    this->head = Node(player);
    this->tail = this->head;
}
void LinkedList::add(Node newNode) {
    // :)
}
