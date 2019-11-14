#include <stdio.h>
int main(void)
{
    int x, y;
    printf("输入成绩\n");
    scanf("%d", &x);
    if (x >= 100)
    {
        y = -1;
    }
    else if (x >= 90)
    {
        y = 4;
    }
    else if (x >= 80)
    {
        y = 3;
    }
    else if (x >= 70)
    {
        y = 2;
    }
    else if (x >= 60)
    {
        y = 1;
    }
    else
        y = 0;
    switch (y)
    {
    case 4:
        printf("excellent\n");
        break;
    case 3:
        printf("good\n");
        break;
    case 2:
        printf("average\n");
        break;
    case 1:
        printf("poor\n");
        break;
    case 0:
        printf("failing\n");
        break;
    default:
        printf("illegal\n");
        break;
    }
    return 0;
    }