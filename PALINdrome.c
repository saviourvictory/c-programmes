#include<stdio.h>
#include<string.h>

int main()
{
    char a[20], c;
    printf("SAVIOUR VICTORY\n");
    puts("enter the string");
    gets(a);
    c = *a;
    strrev(a);
    if (c==*a)
    {
        printf("%s is palindrome",a);

    }
    else
    {
        printf("%s is not a palindrome",a);

    }
    return 0;
    
}