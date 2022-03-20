#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the values of num1, num2 and num3\n");
    scanf("%d %d %d",&num1, &num2, &num3);
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n",num1,num2,num3);
    if (num1 > num2 > num3){
        printf("num1 is the greatest amoung three");

    }
    else if (num2 > num3 > num1)

    {
        printf("num2 is the greatest amoung three");

    }
    else
    {
        printf("num3 is the greatest amoung three");

    }

return 0;
}