#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n;
    cin>>n;
    long int i,ar[n],mul=1;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    double num =0;
    for(i=0;i<n;i++)
    {
        long int p=ar[i];
        long int q=0;
        while(p!=1)
        {
            int d=p%10;
            if(d!=0)
            {
                q=0;
                mul*=ar[i];
                break;
            }
            p/=10;
            q++;
        }
        num+=q;
    }
    cout<<mul;
    for(i=0;i<num;i++)
        cout<<"0";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
