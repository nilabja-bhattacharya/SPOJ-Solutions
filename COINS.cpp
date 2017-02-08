/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000001

#define write(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define D(x)        cerr << #x " = " << (x) <<endl;

inline int setBit(int N, int pos) { return N = N | (1<<pos);}
inline int resetBit(int N, int pos) { return N = N & ~(1<<pos);}
inline bool checkBit(int N, int pos) { return (bool) (N & ( 1<<pos));}

//int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
//int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

typedef long long ll;
typedef unsigned long long ui64;
typedef string st;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<ll> vll;
ll dp[MAX];
ll f(ll n){
	if(n<MAX)
		return dp[n];
	else
		return (f(n/2) + f(n/3) + f(n/4));
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
	for(int i=0;i<12;i++)
		dp[i]=i;
	for(ll i=12;i<MAX;i++){
		dp[i]=max(dp[i],dp[i/2] + dp[i/3] +dp[i/4]);
	}
	while(scanf("%lld",&n)!=EOF){
		if(n<MAX)
			cout<<dp[n]<<endl;
		else
			cout<<f(n)<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
