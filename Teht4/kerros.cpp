#include "kerros.h"

Kerros::Kerros() {

}

void Kerros::maaritaAsunnot() {

    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta) {

    double kokonaiskulutus = 0.0;
    kokonaiskulutus += as1.laskeKulutus(hinta);
    kokonaiskulutus += as2.laskeKulutus(hinta);
    kokonaiskulutus += as3.laskeKulutus(hinta);
    kokonaiskulutus += as4.laskeKulutus(hinta);
    return kokonaiskulutus;
}
