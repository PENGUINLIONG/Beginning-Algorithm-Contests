//
// Created by Administrator on 2018/5/7.
//
#include "stdio.h"
#include "math.h"
int main(){
    int a,b,c,d=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    for(int i=10;i<=100;i++)
    {if(i%3==a&&i%5==b&&i%7==c)
        d=i;
    }
    if(d!=0)
        printf("%d",d);
    else
        printf("No answer");
}
