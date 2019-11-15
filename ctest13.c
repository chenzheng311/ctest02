#include <stdio.h>
int main(void)
{
    int i, g = 1, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        g = i*g;
    }
    printf("%d", g);
    return 0;
}