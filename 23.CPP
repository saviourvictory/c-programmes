#include<conio.h>
#include<stdio.h>
void main()
{int i,n,r=0;
clrscr();
printf("NAME=SAVIOUR VICTORY");
printf("\n enter the number");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
{
if(n%i==0)
r=1;
break;
}
if(r==0)
{printf("the number is prime");}
else
{printf(" the number is composite ");}
getch();
}