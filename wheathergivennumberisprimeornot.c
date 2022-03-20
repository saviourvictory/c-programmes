#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number,x=2;
    printf("SAIOUR VICTORY\n");
    printf("\n enter the number");
    scanf("%d",&number);
    do{
        if (number%2==0)

        {
            printf("this number is not prime=%d",number);
            exit (0);

        }
        
    x++;
    }

   while (x<number);
   printf("this is number is prime=%d",number);
   return 0;
   }