#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int LeaderSum(int array_size, int* array) {
    // Complete this function
int i,sum=0;
    for(i=0;i<array_size;i++){
if(array[i]>array[i+1]) sum+=array[i];
}
    return sum;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *array = malloc(sizeof(int) * n);
    for (int array_i = 0; array_i < n; array_i++) {
    	scanf("%i",&array[array_i]);
    }
    int result = LeaderSum(n,array);
    printf("%d\n", result);
    return 0;
}