#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int x = n;
    for(int i=1;i<=(n/2)+1;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==i)
                cout<<j;
            else if(j==x)
            {
                cout<<x;
                x--;
            }
            else
                cout<<" "; 
        }
        cout<<endl;
    }
    return 0;
}
