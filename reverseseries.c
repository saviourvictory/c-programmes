#include<stdio.h>
int  main()
{int a,b=0,r;
printf("NAME=SAVIOUR VICTORY");
printf("\n enter the number");
scanf("%d",&a);
while(a!=0)
{
r=a%10;
b=b*10+r;
a=a/10;
}
printf("\n the reverse=%d",b);
return 0;
}