#include<stdio.h>
int main()
{
	int i, arr[5];
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
    for(i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
	//write the code here to print array in reverse


	return 0;
}