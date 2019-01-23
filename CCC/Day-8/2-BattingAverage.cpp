#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class avg{
    public:
    char str[100];
    double x;
};

int main() {
 avg a[1000];
    int n,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].str>>a[i].x;
    }
    double max=a[0].x;
    for(int i=0;i<n;i++)
    { 
        if(max<a[i].x)
        {
            max=a[i].x;
            c=i;
        
        }
        if(max==a[i].x)
        {
            if(a[c].str>=a[i].str) c=i;
        }
        
    }
        cout<<a[c].str;
     
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}