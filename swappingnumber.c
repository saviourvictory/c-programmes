#include<stdio.h>


int main()
{
 
   // Variable declaration
   int a, b, c;    
 
   printf("Enter two numbers a and b ");
   scanf("%d %d", &a, &b);
 
   // Swap logic
 
   c = a;
   a = b;
   b = c;
 
  printf("\n After swapping \na = %d\nb = %d\n", a, b);
  
  return 0;
 
}