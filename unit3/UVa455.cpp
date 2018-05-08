//
// Created by Administrator on 2018/5/8.
//
#include "stdio.h"
#include "string.h"
#include "iostream"
using namespace std;
int main(){
int times;
scanf("%d",&times);
while(times--)
    { int c;
    char a[85];
    char *b=a;
    scanf("%s",a);
    int len;
    len=strlen(a);
    for(int i=2;i<=len/2;i++)
        { int temp;
            if(!strncmp(b,b+len/i,len/i))
            printf("%d",len/i);
        }
    printf("\n");
    }
}