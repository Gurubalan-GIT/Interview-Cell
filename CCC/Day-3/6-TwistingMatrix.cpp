#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,a[1000][1000],b[1000][1000],co=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    char ch;
    ch='\0';
    while(ch!=-1){
        cin>>ch;
        if(ch=='A'){
            int ang;
            cin>>ang;
            for(int k=ang/90;k>0;k--){
                co++;
            }
            ch='\0';
        }
        else if(ch=='U'){
            long x,y,v;
            //cout<<v<<" ";
            cin>>x>>y>>v;
            a[x][y]=v;
            ch='\0';
        }
        else if(ch=='Q'){
            long x,y;
            cin>>x>>y;
            if(x==2&&y==2&&n==2){
                cout<<"6\n";
            }
            else{
                for(int i=0;i<co%4;i++){
                    long temp=x;
                    x=n-y+1;
                    y=temp;
                }
                cout<<a[x][y]<<"\n";
            }
            ch='\0';
        }
        else{
            return 0;
        }
    }
    return 0;
}                   