#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef();
    ItalianChef(const std::string& name, int flour, int water);
    void makePasta();
    std::string getName() const override;

private:
    int flour;
    int water;
};

#endif // ITALIANCHEF_H
