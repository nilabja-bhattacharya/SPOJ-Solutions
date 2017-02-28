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
#define MAX 1000010

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
ll tree[2*MAX];
ll lazy[2*MAX];

void updaterange(int idx,int l,int r,int p,int q,ll val){
//	cout<<tree[idx]<<endl;
	if(lazy[idx]!=0){
		tree[idx]+=(r-l + 1)*lazy[idx];
		if(l!=r){
			lazy[idx*2 +1]+=lazy[idx];
			lazy[idx*2+2]+=lazy[idx];
		}
		lazy[idx] = 0;
	}
	if(p>r || q<l || l>r)
		return;
	if(l>=p && r<=q){
		tree[idx] += (r-l + 1)*val;
		//cout<<tree[idx]<<endl;
		if(l!=r){
			lazy[2*idx+1] += val;
			lazy[2*idx+2] += val;
		}
		return;
	}
	else{
		int m= (l+r)/2;
		updaterange(idx*2+1,l,m,p,q,val);
		updaterange(idx*2+2,m+1,r,p,q,val);
		tree[idx]=tree[idx*2+1] + tree[idx*2+2];
	}

}
ll query(int idx,int l,int r,int p,int q){
	if(lazy[idx]!=0){
		tree[idx]+=(r-l+1)*lazy[idx];
		if(l!=r){
			lazy[idx*2+1]+=lazy[idx];
			lazy[idx*2+2]+=lazy[idx];
		}
		lazy[idx]=0;
	}
	if(p>r || q<l || l>r)	return 0;
	if(l>=p && r<=q)
		return tree[idx];
	else{
		int m= (l+r)/2;
		ll val1=query(idx*2+1,l,m,p,q);
		ll val2=query(idx*2+2,m+1,r,p,q);
	//	cout<<val1<<" "<<val2<<endl;
		return val1+val2;
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
		memset(lazy,0,sizeof(lazy));
		memset(tree,0,sizeof(tree));
		for(int i=0;i<m;i++){
			int a,p,q;
			ll v;
			cin>>a;
			if(a==0){
				cin>>p>>q>>v;
				updaterange(0,0,n-1,p-1,q-1,v);
			}
			else if(a==1){
				cin>>p>>q;
				cout<<query(0,0,n-1,p-1,q-1)<<endl;
			}
		/*	for(int j=0;j<n*2;j++)
				cout<<tree[j]<< " ";*/
		//	cout<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
