/*
*LINK:
*nilabja16180
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

vector< vector< pair<int,int> > > grph;

vector<int> dist;
void dikstra(int st,int en){
	dist[st]=0;
	priority_queue<pii, vector<pii>, greater<pii> > pq;
	pq.push({0,st});
	while(!pq.empty()){
		pii tp=pq.top();
		pq.pop();
		int u=tp.second;
		int d=tp.first;
		if(dist[u]<d)	continue;
		for(int i=0;i<grph[u].size();i++){
			pii tp1=grph[u][i];
			int v=tp1.second;
			int w=tp1.first;
			if(dist[u]+w<dist[v]){
			    dist[v]=dist[u]+w;
				pq.push({w,v});
			}
		}
	}
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,m,st,en;
		cin>>n>>m>>st>>en;
		grph.clear();
		grph.resize(n+1);
		for(int i=0;i<m;i++){
			int u,v,w;
			cin>>u>>v>>w;
			grph[u].push_back({w,v});
			grph[v].push_back({w,u});
		}
		    dist.clear();
			dist.assign(n+1,INF);
			dikstra(st,en);
			if(dist[en]==INF)
			    cout<<"NONE"<<endl;
			else
			    cout<<dist[en]<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
