#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"
#include <iostream>

using namespace std;

class Katutaso
{
public:
    Katutaso();
    ~Katutaso();
    void maaritaAsunnot();
    double laskeKulutus(double);

private:
    asunto *as1;
    asunto *as2;
};

#endif // KATUTASO_H
