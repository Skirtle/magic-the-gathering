#include "magic.h"
#include <iostream>

int main(void) {
    std::cout << "Program started\n";
    Card testCard = Card();
    testCard.setName("This is a card");
    std::cout << testCard.getName() << "\n\n";
    
    Sorcery testSorcery = Sorcery();
    short mana[] = {3, 1, 1, 1, 1, 1};
    testSorcery.setName("Conflux");
    testSorcery.setManaCost(mana);
    testSorcery.setEffect("Search your library for a white card, a blue card, a black card, a red card, and a green card. Reveal those cards, put them into your hand, then shuffle.");
    
    std::cout << testSorcery.getName() << "\n";
    //std::cout << testSorcery.getManaCost() << "\n";
    std::cout << testSorcery.getEffect() << "\n";

    return 0;
}