#include <iostream>
#include "asunto.h"

using namespace std;

Asunto::Asunto() {
    asukasMaara = 0;
    neliot = 0;
    cout << "Asunto luotu" << endl;
}

void Asunto::maarita(int m, int n) {
    asukasMaara = m;
    neliot = n;
    cout << "Asunto maaritetty asukkaita= " << m << " nelioita= " << n << endl;
}

double Asunto::laskeKulutus(double hinta) {
    double kulutus = hinta * neliot * asukasMaara;
    cout << "Asunnon kulutus, kun hinta = " << hinta << " on " << kulutus << endl;
    return kulutus;
}
