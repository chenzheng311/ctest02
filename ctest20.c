#include <stdio.h>

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
    int x;
    printf("Enter x::\n");
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