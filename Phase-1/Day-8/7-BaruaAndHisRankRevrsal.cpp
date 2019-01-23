#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int a[1005];
int visited[1005];
vector <int> result;
int t[1005];
 
int main(){
    int n;
    cin>>n;
    for(int i=0;i<1005;i++)
        t[i]=i;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--){
        int c=a[i]+1;
        int j=1,no=0;
        while(no!=c){
            if(!visited[j])
                no++;
            j++;
        }
        result.push_back(j-1);
        visited[j-1]=1;
    }
    
    for(int i=result.size()-1;i>=0;i--)
        cout<<result[i]<<" ";
    return 0;
}