#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,ch;
clrscr();
printf("NAME=SAVIOUR VICTORY");
printf("\n enter the value of a");
scanf("%d",&a);
printf("\n enter the value of b");
scanf("%d",&b);
printf("Arithematic function");
printf("\n 1.ADD");
printf("\n 2.SUB");
printf("\n 3.MUL");
printf("\n 4.DIV");
printf("\n 5.MODULAS");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:c=a+b;
printf("%d",c);
break;
case 2:c=a-b;
printf("%d",c);
break;
case 3:c=a*b;
printf("%d",c);
break;
case 4:c=a/b;
printf("%d",c);
break;
case 5:c=a%b;
printf("%d",c);
break;
default:
printf("wrong input");
}
getch();
}