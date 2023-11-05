#include <stdio.h>

int main(void)
{
    int n, dig, prod, four = 0;
    scanf("%i", &n);
    prod = n;
    while(prod)
    {
        dig = prod % 10;
        prod /= 10;
        if((dig == 1 || dig == 4) && four < 3)
            if(dig == 4)
                four++;
            else
                four = 0;
        else
        {
            printf("NO\n");
            return 0;
        }     
    }
    if(dig == 4)
        printf("NO\n");
    else
        printf("YES\n");
    
}