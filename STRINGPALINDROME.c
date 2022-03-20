#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],i;
    puts("SAVIOUR VICTORY\n");
    puts("Enter the string\n");
    gets(a);
    i=*a;
    if(i==*a)
    {
        puts("inpts is palindrome");

    }
    else
    {
        printf("input is not palindrome");

    }

return 0;
}