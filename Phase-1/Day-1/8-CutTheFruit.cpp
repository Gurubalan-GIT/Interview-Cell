#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int w;
    scanf("%d",&w);
    if(w>2 && w%2==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
