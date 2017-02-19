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
int dx[]={1, -1, 0,0};
int dy[]={0,0,-1,1};
	string str[200];
	int vstd[200][200];
	void bfs(int n,int m){
		queue< pair<int,int> > q;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(str[i][j]=='1'){
					vstd[i][j]=-1;
					q.push({i,j});
				}
				else
					vstd[i][j]=0;
			}
		}
		while(!q.empty()){
			pii x=q.front();
			q.pop();
			for(int i=0;i<4;i++){
				if(x.first+dx[i]>=0 && x.first+dx[i]<n && x.second+dy[i]>=0 && x.second+dy[i]<m && vstd[x.first+dx[i]][x.second+dy[i]]==0 ){
					vstd[x.first+dx[i]][x.second+dy[i]]=vstd[x.first][x.second] + 1;
					if(vstd[x.first][x.second]==-1)
							vstd[x.first+dx[i]][x.second+dy[i]]++;
					q.push({x.first+dx[i],x.second+dy[i]});
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(vstd[i][j]==-1)
					cout<<0<<" ";
				else
					cout<<vstd[i][j]<<" ";
			}
			cout<<endl;
		}
	}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;

		for(int i=0;i<n;i++)
			cin>>str[i];
		bfs(n,m);
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
