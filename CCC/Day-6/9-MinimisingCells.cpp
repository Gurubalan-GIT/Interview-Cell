#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s1;
    getline(cin,s1);
    int m;
    m=s1.length();
    char s2[50][50];
    //cout<<n<<endl;
    int n=ceil(sqrt(m));
    //cout<<n<<endl;
    int i,j;
    int k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(k<m)
                s2[i][j]=s1[k++];
            else
                s2[i][j]='?';
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<s2[i][j];
        }
        cout<<endl;
    }
    return 0;
}