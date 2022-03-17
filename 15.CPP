#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("NAME=SAVIOUR VICTORY\n");
printf("enter the first number=\n");
scanf("%d",&a);
a++;
printf("after increment=%d\n",a);
printf("enter the second number=\n");
scanf("%d",&b);
b--;
printf("after the decrement=%d\n",b);
printf("\n enter third number");
scanf("\n %d",&c);
++c;
printf("\n the value after the pre increment=%d",c);
printf("\n enter the fourth number");
scanf("\n %d",&d);
--d;
printf("\n the value after the pre decrement=%d",d);
getch();
}