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
#define MAX 1000010

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
int n;
int dp[MAX][3];
int arr[MAX][3];
int f(int l, int k){
	if(l<0)
		return INT_MAX;
	if(l==0 && k==0)
		return INT_MAX;
	else if(l==0 && k==1)
		return arr[0][1];
	if(dp[l][k]!=-1)
		return dp[l][k];
	else{
	        if(k==0)
	            return dp[l][k]=min(f(l-1,0),f(l-1,1)) + arr[l][k];
	        else if(k==1)
	            return dp[l][k] = min(min(f(l-1,0),f(l-1,1)), min(f(l,0),f(l-1,2))) + arr[l][k];
	        else if(k==2)
	           	return dp[l][k] = min(min(f(l-1,1),f(l-1,2)),f(l,1)) + arr[l][k];
	}
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int p=0;
	while(1){
		cin>>n;
		p++;
		if(!n)
			break;
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<n;i++)
			cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
		cout<<p<<". "<<f(n-1,1)<<endl;

	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
