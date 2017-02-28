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
#define MAX 1000000

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
int arr[110];
pair<int,int> dp[110][110];
pii f(int i,int j){
	if(i==j)
		return dp[i][j]={arr[j],0};

	if(dp[i][j].first!=-1 && dp[i][j].second!=-1)
		return dp[i][j];
		dp[i][j]={INT_MAX,INT_MAX};
	//	cout<<dp[i][j].first<<" "<<dp[i][j].second<<" ";
		for(int k=i;k<j;k++){
			pii val1=f(i,k);
			pii val2=f(k+1,j);
			if(dp[i][j].second>val1.second + val2.second + val1.first*val2.first){
				dp[i][j].first = (val1.first + val2.first)%100;
				dp[i][j].second = val1.second + val2.second + val1.first*val2.first;
			}
		}
	//	cout<<dp[i][j].first<<" "<<dp[i][j].second<<" ";
			return dp[i][j];
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
	while(cin>>n){
		memset(dp,-1,sizeof(dp));
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++)
			cin>>arr[i];
	//	cout<<dp[0]<<endl;
		cout<<f(0,n-1).second<<endl;
	/*	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cout<<dp[i][j].first<<" "<<dp[i][j].second<<" ";
			cout<<endl;
		}*/
	//	cout<<dp[0][n-1].second<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
