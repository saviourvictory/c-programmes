#include<stdio.h>
int main()
{ int a;
    printf("SAVIOUR VICTORY\n");
    printf("enter the value of a\n");
    scanf("%d",&a);
    if
    (a%2==0)
    goto even;
    else 
    goto odd;
    even:
    {
        printf("\n the number is even");

    }
    return 0;
    odd:
    {
        printf("the number is odd");
    }
    return 0;
}