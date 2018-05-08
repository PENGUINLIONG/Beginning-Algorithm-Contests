//
// Created by Administrator on 2018/5/7.
//

#include "stdio.h"
#include "math.h"
int main()
{ int a;
scanf("%d",&a);
for(int i=a;i>0;i--)
{   int b=i*2-1;
    for(int l=0;l<a-i;l++)
    {printf(" ");}
    for(int j=b;j>0;j--)
    {  printf("#"); }
    printf("\n");
}
}