#include <stdio.h>

#define N 100000005
#define long long long
#define max(x, y) ((x > y) ? x : y)

char comp[N], sieve[N];

int main()
{
    long a, b, i, j, ans = 0;
    scanf("%lld %lld", &a, &b);
    for(j = 2; j*j <= b; ++j)
    {
        if(sieve[j])
            continue;
        for(i = j+j; i*i <= b; i += j)
            sieve[i] = 1;
        for(i = j*max(2, a/j + (a%j > 0)); i <= b; i += j)
            comp[i-a] = 1;
    }
    for(i = max(2, a); i <= b; ++i)
        if(!comp[i-a])
            ans++;
    printf("%lld", ans);
    return 0;
}
