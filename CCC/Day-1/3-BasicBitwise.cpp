#include <stdio.h>

int main()
{
	int var1, var2, ans_and, ans_or, ans_xor;
	//Take as input var1 and var2 and print the result of their bitwise operations
    scanf("%d%d",&var1,&var2);
    printf("%d\n%d\n%d",var1&var2,var1|var2,var1^var2);
	return 0;
}