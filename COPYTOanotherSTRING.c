#include<stdio.h>
#include<string.h>
int main()
{
    char a[5]="HELLO";
    char b[3]="hey";
    char c[10];
    printf("SAVIOUR VICTORY\n");
    strcpy(c,strcat(a,b));
    puts(c);
    return 0;

}