//
// Created by Administrator on 2018/5/8.
//
#include "string.h"
#include "stdio.h"
#include "ctype.h"
#include "iostream"
using namespace std;
int main(){
    int a;
    scanf("%d",&a);
    double sub=0,sum=0;
    while(a--) {
        char s[85];
        int c=0;
        scanf("%s", s);
        double n,tmp;
        for (int i = 0; i < strlen(s); i++) {
            n=0;
            switch (s[i])
            {
                case 'C':n=12.01;break;
                case 'H':n=1.008;break;
                case 'O':n=16.00;break;
                case 'N':n=14.01;break;}
            c=0;
            while(isdigit(s[i+1]))
            {c=(s[i+1]-'0')+c*10;
            i++;
            }
            c!=0?n=n*c:n=n;
            sum+=n;

        }printf("%.3f\n",sum);
        sum=0;
    }

}
