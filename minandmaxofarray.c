#include<stdio.h>
int main()
{
    int arr[100];
    int i,mx,mn,n;
    printf("SAVIOUR VICTORY\n");
    printf("enter the number to store in array=");
    scanf("%d",&n);
    printf("enter %d element in array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("element -");
        scanf("%d",&arr[i]);
    }
mx=arr[0];
mn=arr[0];
for(i=1;i<n;i++)
{
    if(arr[i]>mx)
    
        {mx=arr[i];}
        if(arr[i]<mn)
        {mn=arr[i];}}
        printf("maximum lelment is=%d\n",mx);
        printf("minimum element is=%d",mn);
        return 0;
    
}