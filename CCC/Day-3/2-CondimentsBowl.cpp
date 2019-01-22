#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,now;
    int sum=0;
    scanf("%d",&n);
    now = n;
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for( i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<a;i++)
    {
        now = now - arr[i];
        if(now<5 && i!=a-1)
        {
            sum = sum+(n-now);
            now = now +(n-now);
            
        }
    }
    printf("%d",sum);
   
    return 0;
}