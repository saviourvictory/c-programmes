#include<stdio.h>

int main()
{int a=0,b=1,i,sum=0,number;
printf("\n NAME=SAVOUR VICTORY");
printf("\n enter the number");
scanf("%d",&number);
printf("%d",a);
printf("%d",b);
for(i=2;i<=number;i++)
{sum=a+b;
printf("%d",sum);
a=b;
b=sum;
}
return 0;
}