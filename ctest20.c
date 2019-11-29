#include<stdio.h>
#include<math.h>
int isprime(int  x) {    
    int a,b,i;
    b=sqrt(a);
    for(i=1;i<=b;i++)
   { if(b%i==0){break;}
    if(i>b){x=1;} else{x=0;}}
    return isprime;
}
int main(void)
{int m;
scanf("%d",&m);
if(isprime(m)==1) printf("%d",m);
if(isprime(m)==0) 
return 0;}