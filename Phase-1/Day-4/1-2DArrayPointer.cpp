#include<stdio.h>
#include<string.h>
#include<stdlib.h> //this library contains the function malloc.
int main()
{
    int i, j, N,flag=0,flag2=0;
    scanf("%d", &N);
    int *matrix[N];
    for (i = 0; i < N; i++) matrix[i] = (int*) malloc(sizeof(int) * N);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            scanf("%d", &matrix[i][j]);
    }    
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i!=j &&i+j!=N-1)
            {
                if(matrix[i][j]!=0)
                {
                    printf("no");
                    return 0;
                }
            }
        }
    }
    printf("yes");
    return 0;
}