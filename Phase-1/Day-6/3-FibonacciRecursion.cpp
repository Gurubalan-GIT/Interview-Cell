#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h> 
using namespace std; 

long fib(long n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 

int main () 
{ 
    long n;
    cin>>n;
    if(n>=0 && n<=12){
    cout << fib(n);  
    }
    return 0; 
}  