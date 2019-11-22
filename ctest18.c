#include <stdio.h>
int main(void)
{
    int sum = 0, x,a=0;
    float m;
    printf("Enter:");
    scanf("%d", &x); 
    while (x>0)
    {
        m = x % 10;
        sum += m*m*m;
        x = x / 10;
        a=a+1;
    }
    printf("sum=%d,a=%d", sum,a);
    return 0;
}