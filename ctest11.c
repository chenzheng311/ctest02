#include <stdio.h>
int main(void)
{
    int x, y, z, m;
    scanf("%d%d%d", &x, &y, &z);
    if (x > y)
    {
        if (x > z)
        {
            m = x;
        }
        else
        {
            m = z;
        }
    }
    else
    {
        if (y > z)
        {
            m = y;
        }
        else
        {
            m = z;
        }
    }
    printf("m=%d", m);
    return 0;
}