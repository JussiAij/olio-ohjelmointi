#include "postilaatikko.h"
#include <iostream>
using namespace std;

Postilaatikko::Postilaatikko()
{
    cout << "Luodaan Postilaatikko" << endl;
    maara = 0;
}

void Postilaatikko::lisaaPosti(int m)
{
     cout << "Lisataan postia: " << m << endl;
     maara +=  m;
     cout << "Maara on: " << maara<< endl;
     checkMaara();
}

void Postilaatikko::otaPosti(int m)
{
     cout << "Otetaan postia:" << m << endl;
     maara -= m ;
     cout << "Maara on:" << maara << endl;
     checkMaara();
}

void Postilaatikko::asetaNimi(string n)
{

     cout << "Nimi postilaatikossa:" << n << endl;
}

void Postilaatikko::checkMaara()
{

     if (maara == 0)
     cout << "Postilaatikko on tyhja!"<< endl;
     else if ( maara > 10)
     cout << " Aika tyhjentaa postilaatikko!" << endl;

}
