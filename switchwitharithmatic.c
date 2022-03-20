#include<stdio.h>
int main()
{
    int a,b,c,ch;
    printf("SAVIOUR VICTORY\n");
    printf("\n enter the value of a");
    scanf("%d",&a);
    printf("\nEnter the value of b=");
    scanf("%d",&b);
    printf("RITHEMATIC FUNCTON");
    printf("\n 1.ADD");
    printf("\n 2.SUB");
    printf("\n 3.MUL");
    printf("\n 4.DIVISION");
    printf("\n 5.MODULAS");
    printf("\n ENTER YOUR CHOICE");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:c=a+b;
    printf("%d",c);
        break;
    
    case 2:c=a-b;
    printf("%d",c);
    break;

    case 3:c=a*b;
    printf("%d",c);
    break;

    case 4:c=a/b;
    printf("%d",c);
    break;

    case 5:a%b;
    printf("%d",c);
    break;

    default:
    printf("wrong input");
    
   }
   return 0;
}