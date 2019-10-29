#include <stdio.h>
int main(void)
{
    int a, b, c, d, h;
    float p;
    printf("输入\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    h = a + b + c + d;
    printf("h=%d\n", h);
    p = (a + b + c + d) / 4.0;
    printf("p=%.1f\n", p);
    return 0;
}