#include <iostream>
using namespace std;

int main(void)
{
    int d, m, g;
    int d1, m1, g1;
    const int PUNOLETAN = 6570;

    cin >> d >> m >> g;
    cin >> d1 >> m1 >> g1;

    int gs = g1 - g;
    int ms = m1 - m;
    int ds = d1 - d;

    if(gs >= 18)
        cout << 1;
    else
        cout << 0;

    return 0;
}
