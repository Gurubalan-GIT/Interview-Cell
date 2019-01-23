#include <stdio.h>
#include<math.h>

int main()
{
	float var;
	//input the variable var and print it upto 2, 4 and 6 decimal places here.
	//note that every output must be on a new line
	//you can use the '\n' token to go to a new line
    scanf("%f",&var);
    printf("%.2f\n%.4f\n%.6f",var,var,var+0.000001);
	return 0;
}
