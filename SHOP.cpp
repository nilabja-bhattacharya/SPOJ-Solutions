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
int n,m;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
char arr[30][30];
int dist[30][30];
int bfs(int r,int c){
	priority_queue< pair<int,pair<int,int> >,vector<pair<int, pii> >,greater<pair<int,pii> > > q;
	q.push({0,{r,c}});
	dist[r][c]=1;
	while(!q.empty()){
		pair<int,pii> tp=q.top();
		q.pop();
		int rw=tp.second.first;
		int cl=tp.second.second;
		int w=tp.first;
		if(w>dist[rw][cl]) continue;
		for(int i=0;i<4;i++){
		    int x=rw+dx[i];
		    int y=cl+dy[i];
		    if(x>=0 && x<m && y>=0 && y<n){
    			if(arr[x][y]>='0' && arr[x][y]<='9'){
    			    int w1=arr[x][y]-'0';
    			    if(w+w1<dist[x][y]){
    			        dist[x][y]=w+w1;
    				    q.push({(w+w1),{x,y}});
    			    }
    			}
    			if(arr[x][y]=='D')
    				return w;
		    }
		}
	}
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	while(1){
	    scanf("%d %d",&n,&m);
		char str[30];
		int sti,stj;
		memset(dist,9999999,sizeof(dist));
		if(n==0 && m==0)
			break;
		for(int i=0;i<m;i++){
			scanf("%s",str);
			for(int j=0;j<n;j++){
				arr[i][j]=str[j];
				if(arr[i][j]=='S')
					sti=i,stj=j;
			}
		}
		printf("%d\n",bfs(sti,stj));
		/*char ch;
		scanf("%c",&ch) ;*/
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
