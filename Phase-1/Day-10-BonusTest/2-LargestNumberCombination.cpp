#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char n[1000000];
    scanf("%s",n);
    long l;
    int i,j,temp=0;
    l=strlen(n);
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(n[j+1]>n[j])
            {     temp=n[j+1];
                  n[j+1]=n[j];
                  n[j]=temp;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%c",n[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}