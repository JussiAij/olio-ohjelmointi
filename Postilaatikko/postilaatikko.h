#ifndef POSTILAATIKKO_H
#define POSTILAATIKKO_H
#include<iostream>
using namespace std ;

class Postilaatikko
{
public:   //konstruktori
    Postilaatikko();


    string osoite;
    string nimi;

    void lisaaPosti(int maara);
    void otaPosti(int maara);
    void asetaNimi(string nimi);
    void checkMaara();
    void asetaMaxMaara(int MaxMaara);

private:
    int maara;

};

#endif // POSTILAATIKKO_H
