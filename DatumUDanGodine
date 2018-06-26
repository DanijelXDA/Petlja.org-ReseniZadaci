#include <stdio.h>

int main()
{
    int dan, mesec, godina, prestupna, rez = 0;

    scanf("%d %d %d", &dan, &mesec, &godina);

    switch(mesec) {
        case 1: rez += dan; break;
        case 2: rez += ( 31 + dan ) ; break;
        case 3 : rez += dan + 59; break;
        case 4 : rez += ( 90 + dan ); break;
        case 5 : rez += ( 120 + dan ); break;
        case 6 : rez += ( 151 + dan ); break;
        case 7 : rez += ( 181 + dan ); break;
        case 8 : rez += ( 212 + dan ); break;
        case 9 : rez += ( 243 + dan ); break;
        case 10 : rez += ( 273 + dan ); break;
        case 11 : rez += ( 304 + dan ); break;
        case 12 : rez += ( 334 + dan ); break;
    }

    prestupna = godina % 4 == 0 && godina % 100 != 0 || godina % 400 == 0;

    if( prestupna == 1 && mesec != 1 && mesec != 2)
        rez += 1;

        printf("%d", rez);

    return 0;
}
