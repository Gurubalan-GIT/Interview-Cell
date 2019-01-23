#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
//typedef long int li;
typedef unsigned long long int ulli;
#define ini(a, v)   memset(a, v, sizeof(a))
#define all(x)      (x).begin(), (x).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define test() int t; cin>>t;while(t--)

#define si(x) scanf("%d",&x)
#define slli(x) scanf("%lld",&x)
#define sli(x) scanf("%ld",&x)
#define sd(x) scanf("%d",&x)

#define pfi(x) printf("%d\n",x)
#define pfli(x) printf("%ld\n",x)
#define pflli(x) printf("%lld\n",x)

#define abs(x) ((x)>0?(x):-(x))


#define TRI(a,b,c) mp(mp(a,b),c)

#define INDEX(arr,ind) (lower_bound(all(arr),ind)-arr.begin())
#define LB(a,x) (lower_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which does not compare less than val.
#define UB(a,x) (upper_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which compares greater than val.
#define all(x) x.begin(),x.end()
#define sz size()

#define rep(i,a,b) for(int  i=(a);i<(b);i++)
#define repl(i,a,b) for(lli  i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b);i>=(a);i--)
#define foreach( gg,itit ) for( typeof(gg.begin()) itit=gg.begin();itit!=gg.end();itit++ )

typedef pair<lli,lli> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;
map<lli,int> ma;
set<lli>s;
int has[10000];
int main()
 {
  int n;
  cin>>n;
  vector<lli> v;
  for(int i=0;i<n;i++)
   {
     lli a;
      cin>>a;
     has[a]++;
   }
    int ans=0;
    int cov=0;
 while(1)
  {
   int temp=0;
   for(int i=0;i<1001;i++)
    {
      if(has[i]>0)
       {
         has[i]--;
         temp++;
         cov++;
    }
    }
    ans+=(temp-1);
    if(cov==n) break;
  }
  cout<<ans<<endl;
 }