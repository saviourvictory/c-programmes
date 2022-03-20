#include<stdio.h>
int main()
{
    int arr[3][3],row=3,col=3,i,j;
    printf("SAVIOUR VICTORY\n");
    for(int i=0;i<row;i++)
    
        {for(int j=0;j<col;j++)
        
            {printf("element  %d%d =", i+1,j+1);
            scanf("%d",&arr[i][j]);            
        }
    }
for(i=0;i<row;i++)

    
        {for(int j=0;j<col;j++)
        
            {printf("%d",arr[i][j]);
            if(j==col-1)
        
            {printf("\n");}
        }}

return 0;
}