#include <stdio.h>

int main(void)
{
    int n, count = 0;
    scanf("%i", &n);
    for(int i = 0; i < n; i++)
    {
        int P, V, T;
        scanf("%i%i%i", &P, &V, &T);
        if(P + V + T > 1)
            count++;
    }
    printf("%i\n", count);
}