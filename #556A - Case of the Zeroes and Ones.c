#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, zero = 0;
    scanf("%i", &n);
    char string[n + 1];
    for(int i = 0; i < n; i++)
    {
        scanf(" %c", &string[i]);
        if(string[i] == '0')
            zero++;
    }
    printf("%i\n", abs(n - 2*zero));
}