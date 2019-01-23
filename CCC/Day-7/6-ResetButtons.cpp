#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i;
    int n;
    cin>>n;
    int n1=n;
    int sum=0;
    for(i=1;n>=1;i++)
    {
        sum = sum + (n-1)*i;
        n--;
    }
    cout<<sum+n1;
    return 0;
}