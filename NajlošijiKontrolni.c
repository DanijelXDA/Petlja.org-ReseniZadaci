#include <stdio.h>

int main()
{
    int i, niz[5], min;
    float suma = 0;

    for( i = 0; i < 5; i++) {
        scanf("%d", &niz[i]);
        suma += niz[i];
    }

    min = niz[0];
    for( i = 1; i < 5; i++)
        if( niz[i] < min)
            min = niz[i];



    printf("%.2f", (suma - min) / 4);


    return 0;
}
