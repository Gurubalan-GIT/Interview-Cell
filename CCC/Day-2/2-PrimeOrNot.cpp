#include <stdio.h>
#include <math.h>
int main()
{
    int n, is_prime=0,i;
    scanf("%d", &n);
    //your code here
    //hint : loop through all the numbers less than number and see if any of them divides it

    for(i=1;i<=n;i++){
    if(n%i==0)
        is_prime++;
    }

    if (is_prime == 2) printf("yes");
 else printf("no");
    return 0;
}