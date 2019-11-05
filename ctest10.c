#include <stdio.h>
int main(void)
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    if(x>y){z=x;}else{z=y;}
    printf("z=%d",z);
    return 0;
}