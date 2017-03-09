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

class UnionFind{
private: vi p,rank;
public:
	UnionFind(int n){
		rank.assign(n,0);
		p.assign(n,0);
		for(int i=0;i<n;i++)
			p[i]=i;
	}
	int findSet(int i){
		return p[i]==i ? i: (p[i]=findSet(p[i]));
	}
	bool isSameSet(int i,int j){
		return findSet(i)==findSet(j);
	}
	void Union(int i,int j){
		if(!isSameSet(i,j)){
			int x=findSet(i);
			int y=findSet(j);
			if(rank[y]<rank[x])
				p[y]=x;
			else{
				p[x]=y;
				if(rank[x]==rank[y]) rank[y]++;
			}
		}
	}
};

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int p,n,m;
		cin>>p>>n>>m;
		vector< pair<int, pair<int,int> > > Edges;
		for(int i=0;i<m;i++){
			int u,v,w;
			cin>>u>>v>>w;
			u--;
			v--;
			Edges.push_back({w,{v,u}});
		//	cout<<u<<v<<endl;
		}
		sort(Edges.begin(),Edges.end());
		UnionFind UF(n);
		//cout<<'a'<<endl;
		int mstcost=0;
		for(int i=0;i<m;i++){
			pair<int, pair<int,int> >  ed=Edges[i];
			if(!UF.isSameSet(ed.second.first,ed.second.second)){
				mstcost+=ed.first;
				UF.Union(ed.second.first,ed.second.second);
				//cout<<mstcost<<endl;
			}
		}
		cout<<mstcost*p<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
