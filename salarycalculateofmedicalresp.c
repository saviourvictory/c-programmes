#include<stdio.h>
int main()
{
    int sales;
    float salary1,salary2;
    printf("SAVIOUR VICTORY");
    printf("\n enter the total sales");
    scanf("%d",&sales);
    if(sales>=10000)
    salary1=3000+(0.2*3000)+(0.1*3000)+(sales*0.1)+500;
    {
        printf("\n your salary1 is =%f",salary1);

    }
    if(sales<10000)
    salary2=3000+(0.2*3000)+(0.1*3000)+500+(sales*0.5)+200;
    {
        printf("\n you salary 2is=%f",salary2);
    }
    return 0;
    }