#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
const int maxn = 1000000;
int id[maxn];
bool f[1002];

int main() {

    int t, cas = 1, n, x;
    char s[20];
    while (scanf("%d",&t)!=EOF&&t!=0)
    {
        printf("Scenario #%d\n", cas++);
        queue<int> q[1002];
        queue<int> team;
        for (int i = 1; i <= t; i++)
        {
            scanf("%d", &n);
            f[i] = false;
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &x);
                id[x] = i;
            }
        }
        while (scanf("%s",s)!=EOF&&strcmp(s,"STOP")!=0)
        {
            if (!strcmp(s, "ENQUEUE"))
            {
                scanf("%d", &x);
                if (!f[id[x]])
                {
                    team.push(id[x]);
                    f[id[x]] = true;
                }
                q[id[x]].push(x);
            }
            else
            {
                int top = team.front();
                printf("%d\n", q[top].front());
                q[top].pop();
                if (q[top].empty())
                {
                    team.pop();
                    f[top] = false;

                }
            }
        }
        printf("\n");
    }
    return 0;
}
