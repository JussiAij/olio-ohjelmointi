#include <iostream>
#include "postilaatikko.h"

using namespace std ;

int main()
{
    Postilaatikko pl ;
    pl.asetaNimi("Jussi");

     pl.lisaaPosti(5);
     pl.otaPosti (1);
     pl.lisaaPosti(3);
     pl.otaPosti(7);
     pl.lisaaPosti(16);
    return 0;
}
