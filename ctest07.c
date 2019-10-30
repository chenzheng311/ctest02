#include <stdio.h>
int main(void)
{
    int a,b;
    a=5;
    b=a+a++;
    printf("%d",b);
    return 0;
}