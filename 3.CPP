#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float area,radius,pi=3.14,parameter;
printf("NAME=SAVIOUR VICTORY\n");
printf("enter the radius of circle=\n");
scanf("%f",&radius);
area=pi*radius*radius;
parameter=2*pi*radius;
printf("area of circle%f\n",area);
printf("parameter of circle=%f\n",parameter);
getch();
}