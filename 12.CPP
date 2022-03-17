#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("NAME=SAVIOUR VICTORY\n");
printf("enter the age of person");
scanf("%d",&age);
if(age>=18)
{
printf("eligible for voting\n");
}
else
{
printf("not eligible for voting\n");
}
getch();
}