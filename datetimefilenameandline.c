#include<stdio.h>
#include<stddef.h>
int main()
{
printf("SAVIOUR VICTORY\n");
printf("DATE:%s\n",__DATE__);
printf("TIME:%s\n",__TIME__);
printf("FILE:%s\n",__FILE__);
printf("LINE:%d\n",__LINE__);
return 0;
}