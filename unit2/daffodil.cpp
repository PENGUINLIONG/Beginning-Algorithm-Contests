//
// Created by Administrator on 2018/5/7.
//
#include "stdio.h"
#include "math.h"
int main(){
    int a,b,c;
    for(int i=100;i<999;i++)
    {a=i/100;
    b=i/10-a*10;
    c=i-a*100-b*10;
    if(i==pow(a,3)+pow(b,3)+pow(c,3))
    {
    printf("%d\n",i);}
    }
     return 0;
}
