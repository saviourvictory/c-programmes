#include<stdio.h>
#include<math.h>
int main()
{int number1,number2,i,n;

printf("NAME=SAVIOUR VICTORY");
printf("\n enter the first number of range=");
scanf("%d",&number1);
printf("\n enter the second number of range=");
scanf("%d",&number2);
for(i=number1;i<=number2;i++)
{n=sqrt(i);
if(n*n==i)
{

printf("\n %d",i);
}
}
return 0;
}
