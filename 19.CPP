#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,greatest;
clrscr();
printf("NAME=SAVIOUR VICTORY\n");
printf("enter the number\n");
scanf("%d%d%d\n",&a,&b,&c);
{if(a>c)
if(a>b)
printf("this number is greater=%d\n",a);
else
printf("this number is greater=%d\n",b);
}
{if(b>c)
printf("this number is greater=%d\n",b);
else
printf("this number is greater=%d\n",c);
}
getch();
}