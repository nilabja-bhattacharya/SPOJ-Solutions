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
int color[2500];
bool grph[2500][2500];
int n;
bool bfs(int s){
	color[s]=1;
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int t=q.front();
		q.pop();
		for(int i=1;i<=n;i++){
			if(color[i]==-1 && grph[t][i]==1){
				color[i]=1-color[t];
				q.push(i);
			}
			else if(color[i]==color[t] && grph[t][i]==1){
			  //  cout<<i<<" "<<t<<endl;
				return false;
			}
		}
	}
	return true;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	int it=0;
	while(it<t){
		int m;
		cin>>n>>m;
		memset(color,-1,sizeof(color));
		memset(grph,0,sizeof(grph));
		for(int i=0;i<m;i++){
			int u,v;
			cin>>u>>v;
			grph[u][v]=1;
			grph[v][u]=1;
		}
		bool fl=0;
		for(int i=1;i<=n;i++){
			if(color[i]==-1){
				if(!bfs(i)){
					fl=1;
					break;
				}
			}
		}
		if(fl)
			cout<<"Scenario #"<<it+1<<":"<<"\n"<<"Suspicious bugs found!"<<endl;
		else
			cout<<"Scenario #"<<it+1<<":"<<"\n"<<"No suspicious bugs found!"<<endl;
		it++;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
