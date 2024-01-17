#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Arvaus()
{
    srand(time(0));

    int oikea_luku = rand() % 20 + 1;
    int arvattu_luku;

    do
    {
        cout << "Arvaa luku välillä 1-20: ";
        cin >> arvattu_luku;

        if (arvattu_luku == oikea_luku)
        {
            cout << "Oikein! Arvasit etsittävän luvun." << endl;
        }
        else if (arvattu_luku < oikea_luku)
        {
            cout << "Luku on suurempi." << endl;
        }
        else
        {
            cout << "Luku on pienempi." << endl;
        }

    } while (arvattu_luku != oikea_luku);
}

int main()
{

    Arvaus();
    return 0;
}
