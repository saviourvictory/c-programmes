#include<stdio.h>
int factorial(int a)
{
    int f;
    if(a==0||a==1)
    return 1;
    else
    f=a*factorial(a-1);
    return f;
    }
    int main()
    {
        int a;
        printf("SAVIOUR VICTORY\n");
        printf("enter the number=");
        scanf("%d",&a);
        printf("%d!=%d",a,factorial(a));
        return 0;

    }