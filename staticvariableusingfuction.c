#include<stdio.h>
int fun();
int fun()
{
    static int  y=2;
    printf("%d\n",y);
    y++;

}
int main()
{
    printf("SAVIOUR VICTORY\n");
    fun();
    fun();
    fun();
    return 0;

}