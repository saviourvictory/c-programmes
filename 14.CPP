#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,GREATEST;
clrscr();
printf("NAME=SAVIOUR VICTORY\n");
printf("enter the three numbers=\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{if(a>c)
printf("this number is greatest=%d\n",a);
else
printf("this number is greatest=%d\n",c);}
else
{if(b>c)
printf("this number is greatest=%d\n",b);
else
printf("this number is greatest=%d\n",c);}
getch();
}
