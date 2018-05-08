//
// Created by Administrator on 2018/5/8.
//
#include "stdio.h"
#include "string.h"
#include "iostream"
using namespace std;
/*int main(){
    int in;
    scanf("%d",&in);
    while(in--){
    int a[10];
    int input,b;
    scanf("%d",&input);
    memset(a,0, sizeof(a));
    while(input>0){
        b=input%10;
        a[b]++;
        input/=10;
    }
    for(int c=0;c<10;c++)
    {   printf("%d ",a[c]);}
    printf("\n");}
 }*/
int main(){
    int num;
    scanf("%d",&num);

    while(num--){
        int a[10];
        memset(a,0, sizeof(a));
        int input,b;
        scanf("%d",&input);
        for(int i=1;i<=input;i++)
        {   int input2=i;
            while(input2>0){
            b=input2%10;
            a[b]++;
            input2/=10;
            }
        }
        for(int c=0;c<9;c++)
        {   printf("%d ",a[c]);}
        printf("%d",a[9]);
        printf("\n");
    }
}