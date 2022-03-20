#include<stdio.h>
int main()
{
    int line,row,col,value=0;
    printf("SAVIOUR VICTORY");
    printf("\n enter the number of lines=");
    scanf("%d",&line);
    for(row=1;row<=line;row++)
    {
        for(col=1;col<row;col++)
        {
            value++;
            printf("%d",value);

        }
        printf("\n");
    
    }
    return 0;
}