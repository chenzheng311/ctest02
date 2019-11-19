#include <stdio.h>
int main(void)
{
    int x = 1, y = 1, z, i;
    printf("%8d%8d", x, y);

    for (i = 3; i <= 50; i++)
    {
        z = x + y;
        printf("%8d", z);

        y = x;
        x = z;
    }

    return 0;
}                                                                                                                                                                               