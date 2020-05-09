#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    char s1[100],s2[100],s[300];
    cout<<"Input First string:";
    scanf("%s",s1);
    cout<<"Input Second string:";
    scanf("%s",s2);
    cout<<endl;
    bool flag;
    char *p,*p1,*p2;
    p=s;
    p1=s1;
    p2=s2;
    while(*p1!='\0'||*p2!='\0'){
        if(*p1 == '\0')
            while(*p2!='\0'){
                p++;
                *p=*p2;
                p2++;
                flag=1;
            }
       if(*p2 == '\0')
            while(*p1!='\0'){
                p++;
                *p=*p1;
                p1++;
                flag=1;
            }
        if(flag==1) break;
        if(*p1<*p2){
            p++;
            *p=*p1;
            p1++;
        }
        else {
             p++;
            *p=*p2;
            p2++;
        }
    }
    p ++;
    *p='\0';
    cout<<"Combination:";
    printf("%s",s+1);
    system("pause");
    return 0;
}