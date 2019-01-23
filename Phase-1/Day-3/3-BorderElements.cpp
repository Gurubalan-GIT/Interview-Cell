#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m,n,i,j,count=0;
    cin>>m>>n;
    m=m/n;
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
      count++;
            if(count==n){
            cout<<a[i][j]<<" ";
                count=0;
        }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}