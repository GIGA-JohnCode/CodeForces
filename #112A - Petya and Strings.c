#include <stdio.h>

int main(void)
{
    char string1[101], string2[101];
    scanf("%s%s", string1, string2);
    for(int i = 0; (int)string1[i] != 0; i++)
    {   
        if((int)string1[i] > 90)
            string1[i] -= 32;
        if((int)string2[i] > 90)
            string2[i] -= 32;
        if((int)string1[i] == (int)string2[i])
            continue;
        else if((int)string1[i] > (int)string2[i])
            printf("1\n");
        else
            printf("-1\n");
        return 0;
    }
    printf("0\n");
}