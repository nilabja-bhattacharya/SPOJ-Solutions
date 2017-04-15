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
struct node{
	int heads;
	int tails;
	void initialize(){
		heads=0;
		tails=1;
	}
	void merge(node &A,node &B){
		heads=A.heads+B.heads;
		tails=A.tails+B.tails;
	}
};
node tree[4*MAX];
bool lazy[4*MAX];
void init(int idx,int st,int en){
	if(st==en){
		tree[idx].initialize();
		return;
	}
	int mid=(en+st)/2;
	init(idx*2+1,st,mid);
	init(idx*2+2,mid+1,en);
	tree[idx].merge(tree[idx*2+1],tree[idx*2+2]);
}
void update(int idx,int st,int en,int x,int y){
	if(lazy[idx]){
		swap(tree[idx].heads,tree[idx].tails);
		if(st!=en){
			lazy[idx*2+1]=!lazy[2*idx+1];
			lazy[idx*2+2]=!lazy[2*idx+2];
		}
		lazy[idx]=0;
	}
	if(x>en || y<st)
		return;
	if(x<=st && en<=y){
		swap(tree[idx].heads,tree[idx].tails);
		if(st!=en){
			lazy[idx*2+1]=!lazy[2*idx+1];
			lazy[idx*2+2]=!lazy[2*idx+2];
		}
		lazy[idx]=0;
		return;
	}
	int mid=(en+st)/2;
	update(idx*2+1,st,mid,x,y);
	update(idx*2+2,mid+1,en,x,y);
	tree[idx].merge(tree[idx*2+2],tree[idx*2+1]);
}
void query(node &res,int idx,int st,int en,int x,int y){
	if(lazy[idx]){
		swap(tree[idx].heads,tree[idx].tails);
		if(st!=en){
			lazy[idx*2+1]=!lazy[2*idx+1];
			lazy[idx*2+2]=!lazy[2*idx+2];
		}
		lazy[idx]=0;
	}
	if(st==x && en==y){
	    res=tree[idx];
	    return;
	}
	int mid=st+(en-st)/2;
	if(mid>=y)
		query(res,idx*2+1,st,mid,x,y);
	else if(mid<x)
		query(res,idx*2+2,mid+1,en,x,y);
	else{
		node lt,rt;
		query(lt,idx*2+1,st,mid,x,mid);
		query(rt,idx*2+2,mid+1,en,mid+1,y);
		res.merge(lt,rt);
	}
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	cin>>n>>m;
	init(0,0,n-1);
	memset(lazy,0,sizeof(lazy));
	while(m--){
		int q,x,y;
		cin>>q>>x>>y;
		if(q==0){
			update(0,0,n-1,x-1,y-1);
		}
		else{
			node res;
			query(res,0,0,n-1,x-1,y-1);
			cout<<res.heads<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
