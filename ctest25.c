#include <stdio.h>
int findmax(int x[][3], int n)
{
    int max, i, j;
    max = x[0][0];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (x[i][j] < max)
            {
                return max;
            }
        }
    }
}
int main()
{
    int max, i, j, a[2][3];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    max = findmax(a, 2);
    printf("%d", max);
}
