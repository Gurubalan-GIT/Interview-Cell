#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i1,i2,j1,j2,k,n,temp1,temp2,x1,x2,count;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        for(i1=1;i1<=n;i1++)
        {
            for(temp1=i1;temp1<2*n-i1;temp1++)
            {
                printf(" ");
            }
            for(j1=1;j1<=i1;j1++)
            {   
                printf("%d ",j1);
            }
            for(x1=i1-1;x1>=1;x1--)
            {   
                printf("%d ",x1);
            }
            printf("\n");
        }
        for(i2=n-1;i2>=1;i2--)
        {
            for(temp2=2*n-i2;temp2>i2;temp2--)
            {
                printf(" ");
            }
            for(j2=1;j2<=i2;j2++)
            {
                printf("%d ",j2);
            }
            count=j2-2;
            for(x2=1;x2<i2;x2++)
            {   
                printf("%d ",count);
                count--;
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}