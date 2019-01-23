#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<i<<"\n";
        for(j=0;j<i;j++){
            cout<<" ";
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}