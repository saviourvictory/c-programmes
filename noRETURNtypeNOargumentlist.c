#include<stdio.h>
int fun();
int main()
{
    printf("SAVIOUR VICTORY\n");
    fun();
    return 0;

}

int fun()
{
    int a,b,c;
    printf("enter the value of a and b=");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("the sum is =%d",c);
    
}