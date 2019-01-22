#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
    if(n==1918) printf("26.09.%d",n);
    else if(n<1918){
        if(n%4==0) printf("12.09.%d",n);
        else printf("13.09.%d",n);
    }
    else{
        if((n%400==0) || (n%4==0 && n%100!=0))
        printf("12.09.%d",n);
        else printf("13.09.%d",n);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
