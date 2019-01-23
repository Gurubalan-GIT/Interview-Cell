#include <stdio.h>
void printArray(int a[] ,int n)
{
 for(int i = 0;i < n;i++)
   printf("%d ",a[i]);
}

void replaceWithNextGreatest(int a[], int size)
{
    int maximum =  a[size-1];
    a[size-1] = 0; 
    for(int i = size-2; i >= 0; i--)
    {
        int temp = a[i];
        a[i] = maximum;
        if(maximum < temp)
            maximum = temp;
    }
 printArray(a , size);    
}

int main()
{
    int i;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    replaceWithNextGreatest(arr, n);
    return 0;
}
