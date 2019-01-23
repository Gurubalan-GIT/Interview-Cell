#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Switch(int ini,int x,int y){
    if(x==2 && y==3){
        if(ini == 2)
            return 3;
        else if(ini == 3)
            return 2;
        else
            return ini;
    }
    if(x==1 && y==2){
        if(ini == 2)
            return 1;
        else if(ini == 1)
            return 2;
        else
            return ini;
    }
    return -1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, ini;
    cin>>n>>ini;
    int current =ini;
    // checkPath(ini,n);
    while(n>0){
        if(n%2 == 0){
            current=Switch(current,2,3);
        }else{
            current=Switch(current,1,2);
        }
        if(current == -1){
            cout<<"term";
            break;
        }
        n--;
    }
    cout<<current;
    return 0;
}
