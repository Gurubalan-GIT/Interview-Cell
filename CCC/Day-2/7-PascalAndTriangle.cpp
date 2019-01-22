#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int rows, coef = 0, space, i, j;

    
    scanf("%lld",&rows);

    for(i=0; i<rows; i++)
    {
        

        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            printf("%lld ", coef);
        }
        printf("\n");
    }

       
    return 0;
}