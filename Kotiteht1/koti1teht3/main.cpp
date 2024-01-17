#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum)
{
    srand(time(0));

    int oikea_luku = rand() % maxnum + 1;
    int arvattu_luku;
    int arvausten_maara = 0;

    do
    {
        cout << "Arvaa luku välillä 1-" << maxnum << ": ";
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

        arvausten_maara++;

    } while (arvattu_luku != oikea_luku);

    return arvausten_maara;
}

int main()
{
    int arvausten_maara = game(30);

    cout << "Arvausten määrä: " << arvausten_maara << endl;

        return 0;
}
