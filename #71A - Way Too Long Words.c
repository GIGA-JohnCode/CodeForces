#include <stdio.h>

int main(void)
{
    int n;
    char word[100];
    scanf("%i", &n);
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        scanf("%s", word);
        for(int i = 0; word[i] != '\0'; i++)
                count++;
        if(count <= 10)
            printf("%s\n", word);
        else
            printf("%c%i%c\n", word[0], count - 2, word[count - 1]);
    }
}
