#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n,i,x=1,k,j;
    int m;
    cin>>n;
    m=n;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}