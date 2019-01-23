#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m,i,j;
    cin>>n>>m;
    int a[100][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int k=0,l=0;
    int temp = n; 
    n = m;
    m = temp;
     while (k < m && l < n) 
    { 
        
        for (i = l; i < n; ++i) 
        { 
            cout<<a[k][i]<<" "; 
        } 
        k++; 
        for (i = k; i < m; ++i) 
        { 
            cout<<a[i][n-1]<<" "; 
        } 
        n--; 
        if ( k < m) 
        { 
            for (i = n-1; i >= l; --i) 
            { 
               cout<<a[m-1][i]<<" "; 
            } 
            m--; 
        } 
        if (l < n) 
        { 
            for (i = m-1; i >= k; --i) 
            { 
                cout<<a[i][l]<<" "; 
            } 
            l++;     
        }         
    } 
} 