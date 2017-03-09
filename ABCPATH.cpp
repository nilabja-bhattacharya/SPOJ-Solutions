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

int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

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
int grid[60][60];
int n,m;
int dp[27][60][60];
int dfs(int val,int i1,int j1){
	if(val==27 || i1<0 || j1<0 || i1>=n || j1>=m)
		return INT_MIN;
	else if(dp[val][i1][j1]!=0)
		return dp[val][i1][j1];
	int len=0;
	for(int i=0;i<8;i++){
			if(grid[i1+fx[i]][j1+fy[i]]==val+1 && fx[i]+i1>=0 && fx[i]+i1<n && fy[i]+j1>=0 && fy[i]+j1<m){
				len=dfs(val+1,i1+fx[i],j1+fy[i]);
			//	cout<<(char)(grid[i1+fx[i]][j1+fy[i]]+'A')<<" "<<fx[i]+i1<<" "<<fy[i]+j1<<endl;
				dp[val][i1][j1]=max(dp[val][i1][j1],len);
			}
	}
	return dp[val][i1][j1]+1;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	for(int i=1;;i++){
	    memset(grid,-1,sizeof(grid));
	    memset(dp,0,sizeof(dp));
	    cin>>n>>m;
		if(n==0 && m==0)
			break;
		string str;
		vpii v;
		for(int k=0;k<n;k++){
			cin>>str;
			for(int j=0;j<m;j++){
				grid[k][j]=str[j]-'A';
				if(grid[k][j]==0)
					v.push_back({k,j});
			}
		}
		int mxlen=0;
		for(int k=0;k<v.size();k++)
			mxlen=max(mxlen,dfs(0,v[k].first,v[k].second));
		cout<<"Case "<<i<<": "<<mxlen<<endl;

	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
