#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,k,temp=0,count=0;
        cin>>a>>b>>k;
        if(a<b){
        while(temp<=k){
            temp+=a;
            count++;
        }
        }
        else{
          while(temp<=k){
              temp+=b;
              count++;
          }  
        }
    cout<<count-1<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
