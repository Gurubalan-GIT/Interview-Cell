#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int prime_check(int x){
    int flag=0;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            flag=1;
            break;
        }
    }
    return flag;
}
int factSum(int n) 
{ 
    int res = 0; 
    for (int i = 2; i <= sqrt(n); i++) 
    {  
        if (n%i==0) 
        { 
            if (i==(n/i)) 
                res+=i; 
            else
                res+=(i + n/i); 
        } 
    }
    return (res+1); 
} 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int fact_sum=factSum(n);
        //cout<<fact_sum<<endl;
        int res=prime_check(fact_sum);
        if(fact_sum==0 || fact_sum==1){
            cout<<"no\n";
        }
        else{
            if(res==0){
                cout<<"yes\n";
            }
            else if(res==1){
                cout<<"no\n";
            }
        }
        
    }
    return 0;
}