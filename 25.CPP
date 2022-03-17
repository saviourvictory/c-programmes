#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int t;
float SI,CI,p,r,x;
clrscr();
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
getch();
}