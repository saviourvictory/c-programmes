#include<stdio.h>
int main()
{
    int i,num,n=0,b=1,c;
    printf("SAVIOUR VICTORY\n");
    printf("enter the number=");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        printf("\t%d",n);
        c=n+b;
        n=b;
        b=c;

    }
return 0;
}