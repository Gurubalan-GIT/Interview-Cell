#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long MyFunc(long long n, long long m) 
{
    // Complete this function
    return (n+m);
}

int main() {
    long long n,m,res,count1=0,count2=0,num,ans; 
    scanf("%lld %lld", &n, &m);
    res=MyFunc(n,m);
    num=n;
    ans=res;
    if(n==0)
        count2++;
    while(res>0)
    {
        res=res/10;
        count1++;
    }
    while(n>0)
    {
        n=n/10;
        count2++;
    }
    if(count1==count2)
        printf("%lld",ans);
    else
        printf("%lld",num);
    
   /* int *array = malloc(sizeof(int) * n);
    for (int array_i = 0; array_i < n; array_i++) {
    	scanf("%i",&array[array_i]);
    }
    int result = MyFunc(n, m);
    printf("%d\n", result);*/
    return 0;
}
