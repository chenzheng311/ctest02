#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    if(x<0){
        x=(-x);
    }else{x=x;}
    printf("x=%d",x);
    return 0;
}