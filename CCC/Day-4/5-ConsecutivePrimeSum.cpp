#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isprime(long long int x) 
{
    long long int i;
    if(x==0 || x==1) return false; 
    else {
    for (int i=2; i*i<=x; i++) 
        if (x%i == 0) 
            return false; 
    return true; 
         }
         } 
int main() {
    long long int n,i;
    int sum=2,count=0;
    cin>>n;
    if(n==0) cout<<"0";
    else{
    for(i=3;sum<=n;i++){
        if(isprime(i)==1){
            sum+=i;
            //cout<<sum<<" ";
            if(isprime(sum)==1 && sum<=n){
                count++;
            }
        }   
    }
cout<<count;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}