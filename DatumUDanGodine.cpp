#include <iostream>
using namespace std;

// provera da li je data godina prestupna
bool prestupna(int godina)
{
    // godina je prestupna ako je deljiva sa 4 i nije deljiva sa 100,
    // ili ako je deljiva sa 400
    return (godina % 4 == 0 && godina % 100 != 0) || (godina % 400) == 0;
}

// broj dana u datom mesecu date godine
int brojDanaUMesecu(int mesec, int godina)
{
    switch (mesec)
    {
    // januar, mart, maj, jul, avgust, oktobar, decembar
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    // april, jun, septembar, novembar
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    // februar
    case 2:
        return prestupna(godina) ? 29 : 28;
    // ostali slucajevi - ne bi nikada trebalo dovde da se dodje
    default:
        return 0;
    }
}

int main()
{
    int dan, mesec, godina, danUGodini;
    cin >> dan >> mesec >> godina;// ucitava datum
    danUGodini = dan; // dodela broja dana u zadatom mesecu
    // koji se u narednom ciklusu uvecava za broj dana u prethodnim mesecima
    for (int m = 1; m < mesec; m++)
        danUGodini += brojDanaUMesecu(m, godina);
    cout << danUGodini<< endl; // ispis rednog broja dana u godini
    return 0;
}
