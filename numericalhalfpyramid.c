#include <stdio.h>
int main(){
    int rows,i,j,x=0;
    printf("SAVIOUR VICTORY\n");
    printf("enter the number of rows=");
    scanf("%d",&rows);
    for (int i = 1; i <=rows; i++)

    {
        for(int j=1; j<=i; j++)
{
    x++;
    printf("%d",x);

}   
printf("\n");
 }
    
return 0;
}