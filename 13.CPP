#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,greatest;
clrscr();
printf("NAME=SAVIOUR VICTORY\n");
printf("enter the first number=\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
printf("enter the third number\n");
scanf("%d",&c);
greatest=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("the greatest number is=%d\n",greatest);
getch();
}