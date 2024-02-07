#include "katutaso.h"
#include <iostream>

Katutaso::Katutaso() {}

void Katutaso::maaritaAsunnot() {
    as1.maarita(2, 100);
    as2.maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta) {
    double kokonaiskulutus = 0.0;
    kokonaiskulutus += as1.laskeKulutus(hinta);
    kokonaiskulutus += as2.laskeKulutus(hinta);
    cout << "ollaan laskeKulutus"<< endl;
    return kokonaiskulutus;
}
