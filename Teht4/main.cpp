#include "asunto.h"
#include "katutaso.h"
#include <iostream>
#include"kerros.h"
#include "kerrostalo.h"
int main() {
    Asunto asunto;
    asunto.maarita(2, 100);
    asunto.laskeKulutus(1.0);

    Kerros kerros;
    kerros.maaritaAsunnot();
    kerros.laskeKulutus(1.0);

    Katutaso katutaso;
    katutaso.maaritaAsunnot();
    std::cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1 on " << katutaso.laskeKulutus(1.0) << std::endl;
    Kerrostalo kerrostalo;

    return 0;
}
