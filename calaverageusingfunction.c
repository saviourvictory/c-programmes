#include<stdio.h>
float avg(float a,float b, float c);
float avg(float a,float b, float c)
{
    return((a+b+c)/3);

}
int main(){
    int num1,num2,num3;
    printf("SAVIOUR VICTORY\n");
    printf("enter the 3 numbers=\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("AVERAGE OF 3 NUMBERS=%2f",avg(num1,num2,num3));
    return 0;
}