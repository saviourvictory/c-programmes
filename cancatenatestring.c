#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("SAVIOUR VICTORY\n");
    printf("enter the string =");
    gets(a);
    printf("enter the string=");
    gets(b);
    strcat(a,b);
    printf("%s",a);
    return 0;

    }