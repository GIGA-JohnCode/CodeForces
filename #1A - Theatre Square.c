#include <stdio.h>

int main(void)
{
    int n, m, a;
    scanf("%i%i%i", &n, &m, &a);
    if(n % a == 0 && m % a == 0)
        printf("%lld\n", (long long int)n/a * m/a);
    else if(n % a == 0)
        printf("%lld\n", (long long int)n/a*(m/a + 1));
    else if(m % a == 0)
        printf("%lld\n", (long long int)(n/a + 1)*m/a);
    else
        printf("%lld\n", (long long int)(n/a + 1)*(m/a + 1));
}