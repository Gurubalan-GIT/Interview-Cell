#include<stdio.h>
#include<math.h>
void power(int* x,int y){
    *x=pow(2,y);
}
int main()
{
	int res, val;
	scanf("%d", &val);
    power(&res,val);
	printf("%d", res);
	return 0;
}