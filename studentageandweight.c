#include<stdio.h>
#include<math.h>
int main()
{
    int age,count=0,x=1;
    float weight;
    printf("SAVIOUR VICTORY\n");
    printf("enter the age\n");
    printf("and the weight of 5 students=\n");
    do{
        scanf("%d",&age);
        scanf("%f",&weight);
        if(age<25 && weight<50)
        {
            count++;}
            x++;}

        while (x<=5);
        printf("number of student of<25 age");
        printf("and <50 weight=%d",count);
        return 0;
        
   
}