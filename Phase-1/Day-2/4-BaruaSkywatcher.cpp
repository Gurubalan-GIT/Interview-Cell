#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int x,y,i;
    float t;
    float sum,flag=0;
    scanf("%f",&t);
    
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&x,&y);
        if(x>0&&y>0)
        {
            flag++;
        }
      
    }
    sum=(flag/t);
    
    
    printf("%.6f",sum);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
