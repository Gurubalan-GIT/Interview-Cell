#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n,x,a[1005],cnt,ans;
int main(){
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d",&x);
        a[x]++;
    }
    while (1){
     if (n==0) break;
     int cnt=0;
     for (int i=1;i<=1000;i++) if (a[i]) cnt++,a[i]--,n--;
     ans+=cnt-1;
    }
   printf("%d\n",ans); 

    return 0;
}