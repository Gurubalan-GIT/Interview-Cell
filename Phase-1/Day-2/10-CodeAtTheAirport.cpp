
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    long n;
    cin>>n;
    long flag=0;
    while(n>0)
    {
        if(n==1)
        {
            flag=1;
            break;
        }
        else if(n==3)
            break;
        else if(n%2==0)
           n=n/2;
        else if(n%2==1) 
            n=3*n+3;     
    }
    if(flag==0)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}