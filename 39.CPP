#include<stdio.h>
#include<conio.h>
void main()
{ int x[3][2],i,j,row,col;
clrscr();
printf("NAME=SAVIOUR VICTORY");
printf("\n enter the number:\n");
for(i=0;i<3;i++)
for(j=0;j<2;j++)
scanf("%d",&x[i][j]);
printf("main matrics \n");
for(i=0;i<3;i++)
{for(j=0;j<2;j++)
printf("%d",x[i][j]);
printf("\n");}
printf("transpose matrics \n");
for(i=0;i<2;i++)
{for(j=0;j<3;j++)
printf("%d",x[i][j]);
printf("\n");}
getch();}