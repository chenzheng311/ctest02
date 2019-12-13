#include <stdio.h>
#define n 10
int main()
{
    int a[n];
    int i, m, x, y, z;
    for (m = 0; m < n; m++)
    {
        scanf("%d", &a[m]);
    }
    x = a[n - 1];
    for (i = n - 1; i >= 0; i--)
    {

        y = a[i - 1];
        if (x > y)
        {
            z = x;
        }
        else
        {
            z = y;
        }
        x = z;
    }
    printf("max=%d", z);
}