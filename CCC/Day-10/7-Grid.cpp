#include <bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i = (int)(a); i <= (int)(b); i++)
#define RF(i,a,b) for(int i = (int)(a); i >= (int)(b); i--)
int main()
{
    int X,Y;
    cin>>X>>Y;
    int Cost[X][Y];

    F(i,0,X-1)
    {
        F(j,0,Y-1)
        {
            cin>>Cost[i][j];
        }
    }

    int MinCost[X][Y]; 

    MinCost[0][0] = Cost[0][0];

    F(j,1,Y-1)
        MinCost[0][j] = MinCost[0][j-1] + Cost[0][j];

    F(i,1,X-1)
        MinCost[i][0] = MinCost[i-1][0] + Cost[i][0];

    F(i,1,X-1)
    {
        F(j,1,Y-1)
        {
            MinCost[i][j] = min(MinCost[i-1][j],MinCost[i][j-1]) + Cost[i][j];
        }
    }

    cout<<MinCost[X-1][Y-1];
    return 0;
}
