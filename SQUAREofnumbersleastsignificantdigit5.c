#include<stdio.h>
int main()
{
    int num,r;
    printf("SAVIOUR VICTORY\n");
    printf("enter the value of number=");
    scanf("%d",&num);
    r=num%10;
    if(r==5)
    {
        num=num/10;
        printf("the square is=%d%d",num*num++,r*r);

    }

return 0;

}