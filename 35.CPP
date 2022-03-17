#include<stdio.h>
#include<conio.h>
void main()
{int a,sum=0,n,b;
clrscr();
printf("NAME=SAVIOUR VICTORY");
printf("\n enter the number=");
scanf("%d",&a);
b=a;
while(a>0)
{
n=a%10;
sum=sum+n*n*n;
a=a/10;
}
if(sum==b)
{printf("\n it is an armstrom number");}
else
{printf("\n it is not an armstrom number");}
getch();
}