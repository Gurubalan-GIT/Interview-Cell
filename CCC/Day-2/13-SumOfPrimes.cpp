#include<iostream>
using namespace std; 
  
bool isprime(int x) 
{ 
    for (int i=2; i*i<=x; i++) 
        if (x%i == 0) 
            return false; 
    return true; 
} 
  
bool isSumOfKprimes(int N, int K) 
{ 
    if (N < 2*K) 
        return false; 
  
    if (K == 1) 
        return isprime(N); 
  
    if (K == 2) 
    { 
        if (N%2 == 0) 
            return true; 
  
       
        return isprime(N - 2); 
    } 
  
    return true; 
} 
  
int main() 
{ 
    int n;
    cin>>n;
    if (isSumOfKprimes (n, 2)) 
        cout << "YES" << endl; 
    else
        cout << "NO" << endl; 
    return 0; 
}