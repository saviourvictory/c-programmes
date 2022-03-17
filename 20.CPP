#include<stdio.h>
#include<conio.h>
void main()
{int a;
clrscr();
printf("NAME=SAVIOIUR VICTORY");
printf("\n enter the value of a");
scanf("%d",&a);
if(a%2==0)
goto even;
else
goto odd;
even:
{
printf("\n number is even");
}
return;
odd:
{
printf("\n number is odd");
}
getch();
}