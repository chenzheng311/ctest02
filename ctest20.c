#include <stdio.h>

int isprime(int x)
{

    int i,a;
    a = sqrt(x);

    for (i = 2.0; i <= a; i++)
    {
        if (x % i == 0)
        {
            return 0;
            break;
        }
        else
            {return 1;}
    }
}
int main(void)

{
    int x;
    printf("ÊäÈë:\n");
    scanf("%d", &x);
    if (isprime(x) == 1)
    {
        printf("yes\n");
    }
    if (isprime(x) == 0)
    {
        printf("no\n");
    }
    return 0;
}