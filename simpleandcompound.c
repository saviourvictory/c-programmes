#include<stdio.h>
#include<math.h>
int main()
{int t;
float SI,CI,p,r,x;

printf("NAME=SAVIOUR VICTORY");
printf("\n enter the value of time=");
scanf("%d",&t);
printf("\n enter the value of principle=");
scanf("%f",&p);
printf("\n enter the value of rate=");
scanf("%f",&r);
SI=(p*r*t)/100;
x=(1+r)/100;
CI=p*pow(x,t);
printf("\n SIMPLE INTEREST=%f",SI);
printf("\n COMPOUND INTEREST=%f",CI);
return 0;
}