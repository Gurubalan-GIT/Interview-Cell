#include <iostream>
using namespace std;
int a[1003][1003],m,n,xs,ys,xe,ye,v[1003][1003];
void dfs(int x,int y)
{
    v[x][y]=1;
    if((x-1)>=1&&!v[x-1][y]&&a[x][y]>=a[x-1][y])
    dfs(x-1,y);
    if((x+1)<=n&&!v[x+1][y]&&a[x][y]>=a[x+1][y])
    dfs(x+1,y);
    if((y-1)>=1&&!v[x][y-1]&&a[x][y]>=a[x][y-1])
    dfs(x,y-1);
    if((y+1)<=m&&!v[x][y+1]&&a[x][y]>=a[x][y+1])
    dfs(x,y+1);
    
}
int main()
{
    cin>>n>>m>>xs>>ys>>xe>>ye;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    cin>>a[i][j];
    dfs(xs,ys);
    if(!v[xe][ye])
    cout<<"No Chance";
    else cout<<"Hie Barua";
    return 0;
}