#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int flag=0,a[10000],i=0,j;
    long n,temp;
scanf("%ld",&n);
    temp=n;
    if(n==0) printf("0");
    else{
    while(temp>0){
        a[i]=temp%2;
        temp=temp/2;
        i++;
        //flag++;
       // printf("%d",a[i]);
    }
    for(j=i-1;j>=0;j--){
         printf("%d",a[j]);
        
    }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
