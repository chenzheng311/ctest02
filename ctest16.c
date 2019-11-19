#include <stdio.h>
int main(void)
{
    double fac = 1, term,  e=1;
    int i,n;
    printf("Enter:\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        fac*= i;
        term = 1.0 / fac;
        e += term;
    }
    printf("%lf", e);
    return 0;
}