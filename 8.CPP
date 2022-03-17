#include<stdio.h>
#include<conio.h>
void main()
{int math,tc,c,wt,fit,f,g;
clrscr();
printf("NAME=SAVIOUR VICTORY\n");
printf("enter the marks of math=\n");
scanf("%d",&math);
printf("enter the mark of tc=\n");
scanf("%d",&tc);
printf("enter the mark of c=\n");
scanf("%d",&c);
printf("enter the mark of wt=\n");
scanf("%d",&wt);
printf("enter the mark of fit=\n");
scanf("%d",&fit);
f=math+tc+c+wt+fit;
printf("sum=%d",f);
g=f/5;
printf("percentage=%d",g);
getch();                                                     
}

