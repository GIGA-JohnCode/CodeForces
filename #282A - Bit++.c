#include <stdio.h>

int main(void)
{
    int n, x = 0;
    char statement[4];
    scanf("%i", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", statement);
        if(statement[2] == '+')
            x++;
        else if(statement[2] == '-')
            x--;
        else if(statement[0] == '+')
            ++x;
        else
            --x;
    }
    printf("%i\n", x);
}