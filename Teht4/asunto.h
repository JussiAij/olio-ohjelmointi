#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>


using namespace std;


class Asunto
{
public:
    Asunto();
    int asukasMaara;
    int neliot;
    void maarita(int m, int n);
    double laskeKulutus(double hinta);
};

#endif // ASUNTO_H
