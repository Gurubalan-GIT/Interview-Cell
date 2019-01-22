#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {char w[]="Goodbye";
            char word1[1000];
            cin>>word1;
            long int a=strlen(word1);
            long int b=strlen(w);
            long int i,j=0;
            
            
            for(i=0;i<a;i++)
            {if(word1[i]==w[j])
            {j++;}
            }
            if(j==b)
            {cout<<"Yes";}
            else
                cout<<"No";
                
            /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
