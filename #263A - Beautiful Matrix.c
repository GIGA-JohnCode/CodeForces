#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int elements[5][5], moves = 0;
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
        {
            scanf("%i", &elements[i][j]);
            if(elements[i][j] == 1)
            {
                if(i != 2)
                    moves = abs(2 - i);
                if(j != 2)
                    moves += abs(2 - j);
            }
        }
    printf("%i\n", moves);
}    
