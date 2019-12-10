#include <stdio.h>
#include <math.h>
int isprime(int x)
{

    int i, a;
    a = sqrt(x);

    for (i = 2; i <= a; i++)
    {
        if (x % i == 0)
        {
            break;
        }
    }
    if (i > a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    int m;
    for (m = 2; m <= 100; m++)
    {
        if (isprime(m) == 1)
        {
            printf("%6d", m);
        }
        else
        {
            continue;
        }
    }
}