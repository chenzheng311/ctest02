#include <stdio.h>
int main(void)
{
    int n=1;
    float e=1.0,term=1.0;
    while(term>1e-5)
    {
        term/=n;
        e+=term;
        n++;
    }
    printf("%f\n",e);
    return 0;
}