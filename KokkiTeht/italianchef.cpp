#include "italianchef.h"

ItalianChef::ItalianChef() : Chef(), flour(0), water(0) {
    std::cout << "ItalianChef created." << std::endl;
}

ItalianChef::ItalianChef(const std::string& name, int flour, int water) : Chef(name), flour(flour), water(water) {
    std::cout << "ItalianChef " << name << " created." << std::endl;
}

void ItalianChef::makePasta() {
    std::cout << "Italian Chef " << name << " is making pasta with a special recipe." << std::endl;
    std::cout << name << " uses flour " << flour << "g and water " << water << "ml" << std::endl;
}

std::string ItalianChef::getName() const {
    return name;
}
