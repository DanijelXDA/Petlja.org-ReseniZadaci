#include <stdio.h>

int main()
{
    int n, domacini[50], gosti[50];
    int i, j, brojac = 0;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
        scanf("%d", &domacini[i]);
            
    for(i = 0; i < n; i++)
         scanf("%d", &gosti[i]);    
    
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++) {
            if(domacini[i] > gosti[j]) {
                brojac++;
                break;
            }
    }
    
    printf("%d", brojac);
    
    return 0;
}
