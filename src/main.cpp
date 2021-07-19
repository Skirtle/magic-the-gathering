#include "magic.h"
#include <iostream>
#include <vector>

int main(void) {
    std::cout << "Program started\n";
    Card testCard = Card();
    testCard.setName("This is a card");
    std::cout << testCard.getName() << "\n\n";
    
    Sorcery testSorcery = Sorcery();
    short mana[] = {3, 1, 1, 1, 1, 1};
    testSorcery.setName("Conflux");
    testSorcery.setManaCost(mana);
    testSorcery.setText("Search your library for a white card, a blue card, a black card, a red card, and a green card. Reveal those cards, put them into your hand, then shuffle.");
    
    Creature tiamat = Creature();
    tiamat.setBasePower(7);
    tiamat.setBaseToughness(7);
    short manaTiamat[] = {2, 1, 1, 1, 1, 1};
    tiamat.setManaCost(manaTiamat);
    tiamat.setName("Tiamat");
    std::vector<std::string> tiamatSubtypes;
    tiamatSubtypes.push_back("Dragon");
    tiamatSubtypes.push_back("God");
    tiamat.setSubtypes(tiamatSubtypes);
    tiamat.setText("Big ol' bawb cat");
    
    std::cout << testSorcery.getName() << std::endl;
    testSorcery.printManaCost();
    std::cout << testSorcery.getText() << "\n" << std::endl;

    std::cout << tiamat.getName() << std::endl;
    tiamat.printManaCost();
    //std::cout << tiamat.getSubtypes() << std::endl;
    std::cout << tiamat.getText() << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout << tiamat.getSubtypes().at(i) << std::endl;
    }
    std::cout << tiamat.getBasePower() << std::endl;
    std::cout << tiamat.getBaseToughness() << std::endl;


    return 0;
}