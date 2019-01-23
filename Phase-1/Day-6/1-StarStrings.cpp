#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    char a[1000];
    int i,n,flag=0;
    cin>>a;
    n=strlen(a);
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cout<<"No";
            flag=1;
            break;
        }
        else if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y'){
            if(a[i+1]=='a' || a[i+1]=='e' || a[i+1]=='i' || a[i+1]=='o' || a[i+1]=='u' || a[i+1]=='y'){
                cout<<"No";
                flag=1;
                break;
            }
        }
    }
    if(flag==0) cout<<"Yes";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}