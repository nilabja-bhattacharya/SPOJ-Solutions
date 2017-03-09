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

int fx[] = {+1, -1, 0, 0};
int fy[] = {0, 0, -1, +1};
typedef long long ll;
int grid[1111][1111];
bool vstd[1111][1111];
int n,m;
int maxd,maxr,maxc;
int mxlen=0;
void dfs(int i1,int j1,int l){
	if(l>maxd) {maxd=l; maxr=i1; maxc=j1;}
	vstd[i1][j1]=1;
	for(int i=0;i<4;i++){
		int mdx=i1+fx[i];
		int mdy=j1+fy[i];
		if(mdx>=0 && mdy>=0 && mdx<n && mdy<m && grid[mdx][mdy]==1 && vstd[mdx][mdy]==0){
			dfs(mdx,mdy,l+1);
		}
	}
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		memset(grid,0,sizeof(grid));
		memset(vstd,0,sizeof(vstd));
    		pair<int,int> v;
		cin>>m>>n;
		bool fl=0;
	//	cout<<n<<" "<<m;
		string str;
		for(int i=0;i<n;i++){
			cin>>str;
			for(int j=0;j<m;j++){
				if(str[j]=='.'){
					grid[i][j]=1;
					if(!fl){
						fl=1;
						v.first=i;
						v.second=j;
					}
				}
			}
		}
		maxd=-1;
		dfs(v.first,v.second,0);
		maxd=-1;
		memset(vstd,0,sizeof(vstd));
		dfs(maxr,maxc,0);
	    	/*for(int i=0;i<v.size();i++){
		    if(vstd[v[i].first][v[i].second]==0)
			    mxlen=max(mxlen,dfs(v[i].first,v[i].second));
		}*/
		cout<<"Maximum rope length is "<<maxd<<"."<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
