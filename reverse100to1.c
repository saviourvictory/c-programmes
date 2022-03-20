#include<stdio.h>
int main()
{
    int num1,num2;
    printf("SAVIOUR VICTORY\n");
    printf("enter the first and second number=");
    scanf("%d%d",&num1,&num2);
    for(num1;num2<=num1;num1--)
    {
        printf("\t%d",num1);
    }

return 0;
}