#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,flag=0,i;
    cin>>n;
    for(i=2;i<=n;i++){
    if(n%i==0)
        flag++;
        }
    printf("%d",flag);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}