//
// Created by Administrator on 2018/5/7.
//
#include "stdio.h"
#include "math.h"
int main(){
    int n=10;
    if(n<0||n>360)
    {
        printf("error");
    }
    float sin1,cos1;
    sin1=sin(n);
    cos1=cos(n);
    printf("%f,%f",sin1,cos1);
    return 0;
}