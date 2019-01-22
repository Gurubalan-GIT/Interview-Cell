#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct cord{
    int x,y;
};
int main() {
int t,i,flag=-1;
    struct cord a[100];
    scanf("%d",&t);
    for(i=0;i<t;i++){
     scanf("%d%d",&a[i].x,&a[i].y);   
       // printf("%d%d",a[i].x,a[i].y);   
    }
    for(i=0;i<t-1;i++){
        if((a[i+1].x-a[i].x)!=0){
        if(atan((a[i+1].y-a[i].y)/(a[i+1].x-a[i].x))!=1.5708){
            flag++;
        }
        }
    }
    printf("%d",flag);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}