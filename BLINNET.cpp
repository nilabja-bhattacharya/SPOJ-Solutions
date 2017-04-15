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

vector< pair< int, pair<int,int> > > edges;
class UnionFind{
private: vi p,rank;
public:
	UnionFind(int N){
		rank.assign(N+1,0);
		p.assign(N+1,0);
		for(int i=1;i<=N;i++)
			p[i]=i;
	}
	int findSet(int i){
		return (p[i]==i)?i:(p[i]=findSet(p[i]));
	}
	bool isSameSet(int u,int v){
		return findSet(u)==findSet(v);
	}
	void UnionSet(int i,int j){
		int x=findSet(i);
		int y=findSet(j);
		if(x!=y){
			if(rank[x]>rank[y]){
				p[y]=x;
			}
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
		int n;
		cin>>n;
		edges.clear();
		for(int i=0;i<n;i++){
			string str;
			cin>>str;
			int nds;
			cin>>nds;
			for(int j=0;j<nds;j++){
				int u,w;
				cin>>u>>w;
				edges.push_back({w,{u,i+1}});
			}
		}
		sort(edges.begin(),edges.end());
		UnionFind UF(n);
		int mstcost=0;
		for(int i=0;i<edges.size();i++){
			pair<int,pii> frnt=edges[i];
			int u=frnt.second.first;
			int v=frnt.second.second;
			if(!UF.isSameSet(u,v)){
				mstcost+=frnt.first;
				UF.UnionSet(u,v);
			}
		}
		cout<<mstcost<<endl;

	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
