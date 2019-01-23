#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

const int N = 1e5+5;
int main() {
    string str;
    cin >> str;
    char ch[N];
    long long int a,b,c=0,d=0,e=0,x,y,z=1,flag=0,k=0;
    a=str.length();
    for(c=0;c<a;c++)
    {
        if(a%(c+1)!=0)
            continue;
        for(y=0;y<=c;y++)
        {
            ch[y]=str[y];
        }
        e=c;
        for(y=0;y<a;y++)
        {
            if(str[y]!=ch[k])
            {
                flag=1;
                break;
            }
            
            k++;
            if(k>e)
                k=0;
            
        }
        if(flag==0)
        {
            for(y=0;y<=c;y++)
            {
                cout << ch[y];
            }
         break;
            
        }
        flag=0;
        k=0;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}