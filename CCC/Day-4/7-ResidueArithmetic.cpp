#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x[3],y[3],m,n;
    cin>>m>>n;
    for(int i=0;i<3;i++){
        cin>>x[i]>>y[i];
    while(x[i]!=y[i])
    {
        if(x[i]<y[i])
        {
            x[i]=x[i]+m;
        }else{
            y[i]=y[i]+n;
        }
    }
    }
    cout<<(((2*x[0])+x[1])-(x[2]));
    
    return 0;
}