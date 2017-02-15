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
bool visited[10010];
vector< vector<int> > grph;
int total=0;
int dfs(int v,vector<int> grp){
	visited[v]=1;
	int len;
	int len1=-1;
	int len2=-1;
	for(int i=0;i<grp.size();i++){
		int w=grp[i];
		if(!visited[w]){
			len=dfs(w,grph[w]);
			if(len>=len1){
				len2=len1;
				len1=len;
			}
			else if(len>len2){
				len2=len;
			}
		}
	}
	total=max(total,len1+len2+2);
	return len1+1;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
	cin>>n;
	grph.resize(n+1);
	for(int i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		grph[u].push_back(v);
		grph[v].push_back(u);
	}
	dfs(1,grph[1]);
	cout<<total<<endl;
//	cout<<len<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
