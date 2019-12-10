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
    for (i = n - 1; i >= 0; i--)
    {
        x = a[n - 1];
        y = a[i - 1];
        if (x > y)
        {
            z = x;
        }
        else
        {
            z = y;
        }
        
    }
    printf("max=%d", z);
}