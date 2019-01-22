#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin>>size;
    long long int i,j,arr[100][100];
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }
    int rm=0,cm=0;
    for(i=0;i<=size-1;i++){
        for(j=0;j<size-1;j++){
            rm=rm+arr[i][j]*arr[i][j+1];
        }
        rm=rm+arr[i][j]*arr[i+1][j-1-i];
    }
    for(j=0;j<=size-1;j++){
        for(i=0;i<size-1;i++){
            cm=cm+arr[i][j]*arr[i+1][j];
        }
        cm=cm+arr[i][j]*arr[i-1-j][j+1];
    }
    if(cm<rm) cout<<"column-major";
    else if (cm==rm || rm<cm) cout<<"row-major";
    
    return 0;
}
