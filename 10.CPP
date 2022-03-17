#include<stdio.h>
#include<conio.h>
void main()
{
int number1=10,number2=20,z;
clrscr();
printf("NAME=SAVIOUR VICTORY\n");
z=(number1>number2);
z ? printf("display number1"):printf("display number2\n");
printf("sum=%d\n",number1+number2);
printf("sub=%d\n",number1-number2);
printf("multiplication=%d\n",number1*number2);
printf("division=%d\n",number1/number2);
printf("average=%d\n",(number1+number2)/2);
getch();
}
