#include<stdio.h>
int main()
{ int age;
    printf("NAME=SAVIOUR VICTORY\n");
    printf("enter the age  of person\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("eligible for voting\n");

    }
    else
    {
        printf("not eligible for voting\n");

    }
    return 0;
}