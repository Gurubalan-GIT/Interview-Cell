#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
long long div(long long n)
{   long long sum=0,a;
      while(n!=0)
    {
        a=n%10;
        sum+=a;
        n=n/10;
    }
 return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n=0,m,sum=0,a,b;
    char p[100000];
    cin>>p>>m;
   for(int i=0;i<strlen(p);i++)
   {
       n+=(long long)(p[i]-'0');
   }
    b=div(n);
    if(m!=0)
    b*=m;
    
    while(1)
    {
        b=div(b);
        if(b>=0&&b<=9)
            break;
        //cout<<b<<endl;
    }
    cout<<b;
    return 0;
}