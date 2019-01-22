#include <stdio.h>

int main()
{	
	int var, multiplied_by_2, divided_by_2;
	scanf("%d", &var);
	//assign values to divided and multiplied using bitwise shift operators
	
	
	printf("%d ", (var>>1));
	printf("%d", (var<<1));
	return 0;
}