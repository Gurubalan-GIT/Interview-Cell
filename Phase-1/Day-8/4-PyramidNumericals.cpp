#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main() {
      int number, i, k, count = 1,sum=0,p=1,a[1001], diff = 6;
    scanf("%d", &number);
    for(i = 1; i <= number*(number+1)/2; i++)
    {
        a[i] = a[i-1] + diff;
        diff += 16;
    }
    count = number - 1;
    for (k = 1; k <= number; k++)
    {
        for (i = 1; i <= count; i++)
            printf(" ");
        count--;
        for (i = 1; i <=k; i++){
            printf("%05d ",a[p]);
        p++;
        }
        printf("\n");
     }
    
    return 0;
}