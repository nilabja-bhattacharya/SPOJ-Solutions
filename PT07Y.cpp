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
vector < vector<int> > grph;
int n,m;
bool isCyclic(int v,int p){
	visited[v]=true;
	for(int i=0;i<grph[v].size();i++){
		int w=grph[v][i];
		if(!visited[w]){
			if(isCyclic(w,v))
				return true;
		}
		else if(w!=p){
			return true;
		}
	}
	return false;
}
bool isTree(){
	memset(visited,0,sizeof(visited));
	if(!isCyclic(1,-1)){
		for(int i=1;i<=n;i++){
			if(!visited[i])
				return false;
		}
		return true;
	}
	return false;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	cin>>n>>m;
	grph.resize(n+1);
	for(int i=0;i<m;i++){
		int v,u;
		cin>>v>>u;
		grph[u].push_back(v);
		grph[v].push_back(u);
	}
	if(isTree())
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
