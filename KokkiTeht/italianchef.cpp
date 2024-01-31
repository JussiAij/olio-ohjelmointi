#include "italianchef.h"

ItalianChef::ItalianChef() : Chef(), flour(0), water(0) {
    std::cout << "ItalianChef created." << std::endl;
}

ItalianChef::ItalianChef(const std::string& name, int flour, int water) : Chef(name), flour(flour), water(water) {
    std::cout << "ItalianChef " << name << " created." << std::endl;
}

void ItalianChef::makePasta() {
    std::cout << "ItalianChef " << name << " is making pasta." << std::endl;
    std::cout << "Using " << flour << "g of flour and " << water << "ml of water." << std::endl;
}

std::string ItalianChef::getName() const {
    return name;
}
