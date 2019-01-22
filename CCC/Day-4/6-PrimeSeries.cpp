#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prime (int num);
int main() {
    int i,j,n,f=2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           while(!prime(f)){
               f++;
           }
            printf("%d ",f++);
           }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
int prime(int num)
{
    int i,k;
    for(i=2;i<num;i++)
    {
        if(num%i!=0)
            k=1;
        else
        {
            k=0;
            break;
        }
    }
    if(k==1 || num==2)
        return 1;
    else
        return 0;
}