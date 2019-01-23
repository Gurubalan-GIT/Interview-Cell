#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int p,opp,arr[100000],pr,d=1;
    scanf("%d",&p);
    scanf("%d",&opp);
    int i;
    for(i=0;i<opp;i++)
        scanf("%d",&arr[i]);
    pr=p;
    for(i=0;i<opp;i++)
    {
        if(arr[i]>=p)
        { d=-1;break;}
        else if(pr>arr[i])
            pr=pr-arr[i];
        else
        {
            d++;
            pr=p;
            pr=pr-arr[i];
        }
    }
    printf("%d",d);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
