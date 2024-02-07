#include "kerrostalo.h"
#include <iostream>

Kerrostalo::Kerrostalo() {

}

double Kerrostalo::LaskeKulutus(double hinta) {
    double kokonaiskulutus = 0.0;

    kokonaiskulutus += eka.laskeKulutus(hinta);


    kokonaiskulutus += toka.laskeKulutus(hinta);


    kokonaiskulutus += kolmas.laskeKulutus(hinta);

    return kokonaiskulutus;
}
