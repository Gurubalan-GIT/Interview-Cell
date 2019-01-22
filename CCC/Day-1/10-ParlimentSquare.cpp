#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
double n,m,a;
    long x,y;
    scanf("%lf%lf%lf",&n,&m,&a);
    x=ceil(n/a);
    y=ceil(m/a);
    printf("%ld",x*y);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}