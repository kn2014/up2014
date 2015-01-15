#include<iostream>
#include <string.h>
using namespace std;

int fibonaci (int i){
if(i==0)
return 0;
if(i==1)
return 1;
return fibonaci(i-1) + fibonaci(i-2);
}

bool isFibonaci (int n){
    for(int i = 0; fibonaci(i)<=n; i++){
        if(fibonaci(i) == n)
            return true;
    }
    return false;
}

void reverse1(char* str)
{
    int l = strlen(str); char tmp;
    for(int i=0;i<l/2;i++)
    {
        tmp = str[i];
        str[i]=str[l-1-i];
        str[l-1-i] = tmp;

    }
}

bool func(char* str1, char* str2)
{
    reverse1(str2);
    for(int i = 0; i<strlen(str2); i++){
        if(str1[i]!=str2[i])
            return false;
    }
    return true;
    //return !strncmp(str1,str2,strlen(str2));
}


int main(){
    char str1[256],str2[256];
    cin>>str1>>str2;
    cout<<func(str1,str2)<<endl;
}
