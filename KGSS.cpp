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
ll arr[MAX];
int n;
struct node{
	ll max1;
	ll max2;
	void initialize(ll val){
		max1=val;
		max2=0;
	}
	void merge(node &A,node &B){
		max1=max(A.max1,B.max1);
		max2=max(A.max2,B.max2);
		if(max1==A.max1)
			max2=max(B.max1,max2);
		else
			max2=max(A.max1,max2);
	}
};

node st[2*MAX];

void init(int idx,int l,int r){
	if(l==r){
		st[idx].initialize(arr[l]);
		return;
	}
	else{
		int m=(l+r)/2;
		init(idx*2+1,l,m);
		init(idx*2+2,m+1,r);
		st[idx].merge(st[idx*2+1],st[idx*2+2]);

	}
}

void update(int idx, int l,int r, int i, ll val){
	if(l==r && l==i){
		st[idx].initialize(val);
			//cout<<"c"<<endl;
		return;
	}
	else{
		int m=(l+r)/2;
		if(i<=m)
			update(2*idx+1,l,m,i,val);
		else if(i>m)
			update(2*idx+2,m+1,r,i,val);
		st[idx].merge(st[2*idx+1],st[2*idx+2]);
	//	cout<<"c"<<endl;
	}
}

void query(node &res, int idx,int l,int r,int i, int j){
	if(l==i && r==j){
		res=st[idx];
		return;
	}
	else{
		int m=(l+r)/2;
		if(m>=j)
			query(res,idx*2+1,l,m,i,j);
		else if(m<i)
			query(res,idx*2+2,m+1,r,i,j);
		else{
			node left,right;
			query(left,idx*2+1,l,m,i,m);
			query(right,idx*2+2,m+1,r,m+1,j);
			res.merge(left,right);
		}
	}
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	//cout<<"c"<<endl;
	init(0,0,n-1);
//	cout<<"c"<<endl;
	int m;
	cin>>m;

	while(m--){
		char q;
		cin>>q;
		if(q=='Q'){
			int x,y;
			cin>>x>>y;
			node res;
			query(res,0,0,n-1,x-1,y-1);
		//	cout<<res.max1<<" "<<res.max2<<endl;
			cout<<(ll)(res.max1+res.max2)<<endl;
		}
		else{
			int x;
			ll y;
			cin>>x>>y;
		//	cout<<x<<y<<endl;
			update(0,0,n-1,x-1,y);
		}
	/*	for(int i=0;i<n<<1;i++){
	        cout<<st[i].max1<<" "<<st[i].max2<<endl;
	    }*/
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
