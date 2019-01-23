#include <stdio.h>

int main()
{
	int var;
	scanf("%d", &var);
	//replace the '_' with appropriate condition
	(var%10==0) ? printf("Last digit zero") : printf("Last digit non-zero");
	return 0;
}