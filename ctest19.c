#include <stdio.h>
int max(int a,int b)
{
    if(a>b)return a; else return b;
}
int main(void)
{
   int  x,y;
   printf("Enter a and b:");
   scanf("%d%d",&x,&y);
   printf("%d",max(x,y));
}
