#include <stdio.h>

int main(void)
{
    int weight;
    scanf("%i", &weight);
    if(weight % 2 == 0 && weight != 2)
    printf("YES\n");
    else
    printf("NO\n");
}