#include <stdio.h>

int main(void)
{
    int n, k, array[50], count = 0;
    scanf("%i%i", &n, &k);
    for(int i = 1; i <= n; i++)
        scanf("%i", &array[i]);
    for(int i = 1; i <= n; i++)
        if(array[i] >= array[k] && array[i] != 0)
            count++;
    printf("%i\n", count);
}