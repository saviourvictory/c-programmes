#include<stdio.h>
#define number 19
int main()
{
    printf("SAVIOUR VICTORY\n");
    #if(number>20)
    printf("value of number greater than 0 is=%d",number);
    #else
    printf("value of number is less than 0 is=%d",number);
    #endif
    return 0;
    
}