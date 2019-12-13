#include<stdio.h>
int main()
{
    int n=5;
    int a[n];
    int i,j,m,x,y;
    for(m=0;m<n;m++){ 
    scanf("%d",&a[m]) ;}
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    {
        x=a[i];
        y=a[j];
        if(a[i]<a[j]){a[i]=y;a[j]=x;}
    }
    for(m=0;m<n;m++)
    {
        printf("%3d",a[m]);
    }
}