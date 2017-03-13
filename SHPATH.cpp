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
//#define read(x) freopen(x,"r",stdin);
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

inline void read (int &x) {
    register char c = getchar();
    x = 0;
    bool neg = 0;
    for(;((c < '0' || c > '9') && c != '-'); c = getchar());
    if (c == '-') {
        neg = 1;
        c = getchar();
    }
    for(;c >= '0' && c <= '9'; c=getchar())
        x = (x << 1) + (x << 3) + (c - '0');
    if(neg)
        x = -x;
}
int n;
vector< vector< pair< int,int > > > grph;
vector<int> p;
vector< int > dist;
void dijsktra(int s){
	dist[s]=0;
	p[s]=s;
	priority_queue< pii,vpii,greater<pii> > pq;
	pq.push({0,s});
	while(!pq.empty()){
		pii node=pq.top();
		pq.pop();
		int w=node.first;
		int u=node.second;
		if(w>dist[u])	continue;
		for(int i=0;i<grph[u].size();i++){
			pii v=grph[u][i];
			if(dist[u]+v.second<dist[v.first]){
				dist[v.first]=dist[u]+v.second;
				pq.push({dist[v.first],v.first});
			}
		}
	}
}
int main() {
     // ios_base::sync_with_stdio(false);
      //cin.tie(NULL);
	int t;
	read(t);
	while(t--){
		read(n);
		string str;
		grph.clear();
		grph.resize(n+1);
		p.assign(n+1,0);
		dist.assign(n+1,INF);
		map<string,int> mp;
		for(int i=0;i<n;i++){
			cin>>str;
			mp[str]=i+1;
			int e;
			read(e);
			for(int j=0;j<e;j++){
				int u,w;
				read(u);
				read(w);
				grph[i+1].push_back({u,w});
			}
		}
		int q;
		read(q);
		for(int i=0;i<q;i++){
			p.assign(n+1,0);
			dist.assign(n+1,INF);
			string str1,str2;
			cin>>str1>>str2;
			int n1=mp[str1];
			int n2=mp[str2];
			dijsktra(n1);
			printf("%d\n",dist[n2]);
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
