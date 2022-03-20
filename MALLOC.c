#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i;
    printf("SAVIOUR VICTORY\n");
    ptr=(int *)malloc(6 *sizeof(int));
    for(int i=0;i<6;i++)
    {
        printf("enter the value of %d element:",i);
        scanf("%d",&ptr[i]);

    }
    for (i=0;i<6;i++)
    {
        printf("the value of %d element is =%d\n",i,ptr[i]);

    }
    return 0;

    }