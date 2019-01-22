#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isPower(unsigned n) 
{ 
    if (n==1)  return true; 

    for (int x=2; x<=sqrt(n); x++) 
    { 
        unsigned y = 2; 
        unsigned p = pow(x, y); 
  
 
        while (p<=n && p>0) 
        { 
            if (p==n) 
                return true; 
            y++; 
            p = pow(x, y); 
         } 
    } 
    return false; 
} 

int main() 
{ int i;
   scanf("%d",&i); 
        if (isPower(i)) 
           cout << "yes"; 
 else cout<<"no";
    return 0; 
}