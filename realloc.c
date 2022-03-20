#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i;
    printf("SAVIOUR VICTORY\n");
    ptr=(int *)calloc(10,sizeof(int));
    for(int i=0;i<10;i++){
        ptr[i]=7*(i+1);
        printf("\n tha value of 7% %d=%d\n",i+1,ptr[i]);

    }

ptr=realloc(ptr,15*sizeof(int));
printf("AFTER REALLOCATION");
for(int i=0;i<15;i++);
{
    ptr[i]=7* (i+1);
    printf("\n the value of7* %d=%d\n",i=1,ptr[i]);

}
return 0;
}
