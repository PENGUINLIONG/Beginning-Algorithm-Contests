//
// Created by Administrator on 2018/5/7.
//
#include "stdio.h"
#include "string.h"
#include "iostream"
using namespace std;
/*int fac(int a)
{
    int s=1;
    for(a;a>0;a--)
    {
        s+=a;
    }
    return s;
}
int main(){
    char a[85];
    char b[85];
    int c,s=0;
    scanf("%s",a);
    char *num=a;
    char *num2=b;
    while (num!=NULL)
    {   if(strcmp(num,"X"))
        {   num2="1";
            num2++;
        } else{
        num2="\0";
        c=strlen(num2);
        s+=fac(c);
        memset(b,0, sizeof(b));
        *num2=b[0];
    }
    num++;
    }
printf("%d",s);
    return 0;
}
*/
/*int main(){
    int a;
    scanf("%d",&a);
    while(a--) {
        char s[85];
        int d=0;
        int sum=0;
        scanf("%s", s);
        for(int i=0;i<=strlen(s);i++)
        {   if(s[i]!='O')
            {
                for(d;d>0;d--)
                    sum+=d;
            }
            else
            {
                d++;
            }

        }
        printf("%d\n",sum);
    }
}*/
int main(){
    int a;
    scanf("%d",&a);
    while(a--){
        char s[85];
        scanf("%s", s);
        int d=0,sum=0;
        for(int i=0;i<=strlen(s);i++)
        {   if(s[i]=='O')
            {d++;
                sum+=d;
            }else
            {
                d=0;
            }

        }
        printf("%d\n",sum);
    }
}