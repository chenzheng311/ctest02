#include <stdio.h>
int main(void)
{
    int sum = 0, x;
    float m;
    printf("Enter:");
    scanf("%d", &x); 
    while (x>0)
    {
        m = x % 10;
        sum += m;
        x = x / 10;
    }
    printf("sum=%d", sum);
    return 0;
}