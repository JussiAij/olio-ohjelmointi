#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double katutasonKulutus = eka->laskeKulutus(hinta);
    double kerrostenKulutus = toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);
    return katutasonKulutus + kerrostenKulutus;
}
