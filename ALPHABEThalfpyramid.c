#include <stdio.h>
int main() {
    int rows;
    char x='A';
    printf("SAVIOUR VICTORY\n");
    printf("enter the number of rows=");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for (int j = 1; j <=i; j++)
        {
            x++;
        printf("%c",x);
        }
        
    printf("\n");
    }

return 0;}