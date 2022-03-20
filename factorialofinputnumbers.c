#include<stdio.h>
int main()
{
    int num,i=1;
    printf("SAVIOUR VICTORY\n");
    printf("enter the number=");
    scanf("%d",&num);
    while (num>1)
    {
        i=i*num;
        num--;
        printf("%d\n",i);

    }
    return 0;
}