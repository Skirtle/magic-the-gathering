#include "magic.h"
#include <iostream>
#include <vector>

int main(void) {
    std::cout << "Program started\n";
    Card testCard = Card();
    testCard.setName("This is a card");
    std::cout << testCard.getName() << "\n\n";
    
    Sorcery conflux = Sorcery();
    conflux.setName("Conflux");
    conflux.setManaCost("3WUBRG");
    conflux.setText("Search your library for a white card, a blue card, a black card, a red card, and a green card. Reveal those cards, put them into your hand, then shuffle.");
    
    Creature tiamat = Creature();
    tiamat.setBasePower(7);
    tiamat.setBaseToughness(7);
    tiamat.setManaCost("2WUBRG");
    tiamat.setName("Tiamat");
    tiamat.setLegendary(true);
    std::vector<std::string> tiamatSubtypes;
    tiamatSubtypes.push_back("Dragon");
    tiamatSubtypes.push_back("God");
    tiamat.setSubtypes(tiamatSubtypes);
    tiamat.setText("Flying\nWhen Tiamat enters the battlefield, if you cast it, search your library for up to five Dragon cards not named Tiamat that each have different names, reveal them, put them into your hand, then shuffle.");

    Instant redsun = Instant();
    redsun.setName("Red Sun's Zenith");
    redsun.setManaCost("XR");
    redsun.setText("Red Sun's Zenith deals X damage to any target. If a creature dealt damage this way would die this turn, exile it instead. Shuffle Red Sun's Zenith into its owner's library.");

    Land sengir = Land();
    sengir.setName("Castle Sengir");
    sengir.setText("Tap: Add C.\n1, Tap: Add B.\n2, Tap: Add U or R.");

    Artifact solring = Artifact();
    solring.setName("Sol Ring");
    solring.setManaCost("1");
    solring.setText("Tap: Add CC.");

    Enchantment prismatic = Enchantment();
    prismatic.setName("The Prismatic Bridge");
    prismatic.setManaCost("WUBRG");
    prismatic.setLegendary(true);
    prismatic.setText("At the beginning of your upkeep, reveal cards from the top of your library until you reveal a creature or planeswalker card. Put that card onto the battlefield and the rest on the bottom of your library in a random order.");
    
    std::cout << conflux.getName() << std::endl;
    std::cout << conflux.getManaCost() << std::endl;
    std::cout << conflux.getText() << "\n" << std::endl;

    std::cout << tiamat.getName() << std::endl;
    std::cout << conflux.getManaCost() << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout << tiamat.getSubtypes().at(i) << " ";
    }
    std::cout << std::endl;
    std::cout << tiamat.getText() << std::endl;
    std::cout << tiamat.getBasePower() << std::endl;
    std::cout << tiamat.getBaseToughness() << "\n" << std::endl;

    std::cout << redsun.getName() << std::endl;
    std::cout << redsun.getManaCost() << std::endl;
    std::cout << redsun.getText() << "\n" << std::endl;

    std::cout << sengir.getName() << std::endl;
    std::cout << sengir.getText() << "\n" << std::endl;

    std::cout << solring.getName() << std::endl;
    std::cout << solring.getManaCost() << std::endl;
    std::cout << solring.getText() << "\n" << std::endl;

    std::cout << prismatic.getName() << std::endl;
    std::cout << prismatic.getManaCost() << std::endl;
    std::cout << prismatic.getText() << "\n" << std::endl;

    return 0;
}