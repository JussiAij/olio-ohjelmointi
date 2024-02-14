#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{

    Kerrostalo *k = new Kerrostalo();



    cout<<"Kerrostalon kulutus, = "<<k->laskeKulutus(0.1)<<endl;
    delete k;

    return 0;
}
