/*
*LINK:
*nilabja16180
*/
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <fstream>
#include <limits>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000000

#define write(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define D(x)        cerr << #x " = " << (x) <<endl;

inline int setBit(int N, int pos) { return N = N | (1<<pos);}
inline int resetBit(int N, int pos) { return N = N & ~(1<<pos);}
inline bool checkBit(int N, int pos) { return (bool) (N & ( 1<<pos));}
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx

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

int dp[110][110][2];

int f(int n,int d,int b){
	if(n==1)
		return 0;
	if(n==2 && d==0 && b==0)
		return 2;
	if(n==2 && d==1 && b==1)
		return 1;
	if(n==2 && d==0 && b==1)
		return 1;
	if(dp[n][d][b]!=-1)
		return dp[n][d][b];
	dp[n][d][b]=0;
	if(b==0)
		dp[n][d][b]=f(n-1,d,0)+f(n-1,d,1);
	if(b==1)
		dp[n][d][b]=f(n-1,d,0)+f(n-1,d-1,1);
	return dp[n][d][b];
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int k,n,d;
		cin>>k>>n>>d;
		memset(dp,-1,sizeof(dp));
		int ans=f(n,d,0) + f(n,d,1);
		cout<<k<<" "<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
