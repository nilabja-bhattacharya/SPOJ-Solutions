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
struct box{
	ll l,h,d;
};
bool cmp(const box &a,const box &b){
	return a.l*a.d>b.l*b.d;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	while(1){
		int n;
		cin>>n;
		if(!n)
			break;
		vector<box> v(3*n);
		vector<ll> lis(3*n);
		for(int i=0;i<3*n;i+=3){
			cin>>v[i].l>>v[i].h>>v[i].d;
			if(v[i].d>v[i].l)
			    swap(v[i].d,v[i].l);
			v[i+1].h=v[i].l;
			v[i+1].l=max(v[i].h,v[i].d);
			v[i+1].d=min(v[i].h,v[i].d);
			v[i+2].h=v[i].d;
			v[i+2].l=max(v[i].l,v[i].h);
			v[i+2].d=min(v[i].l,v[i].h);
		}
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<3*n;i++){
			lis[i]=v[i].h;
		//	cout<<v[i].l<<" "<<v[i].d<<" "<<v[i].h<<endl;
		}
		for(int i=1;i<3*n;i++){
			for(int j=0;j<i;j++){
				if(v[j].l>v[i].l && v[j].d>v[i].d && lis[i]<lis[j]+v[i].h)
					lis[i]=lis[j]+v[i].h;
			}
		}
		ll ans=0;
		for(int i=0;i<3*n;i++)
			ans=max(ans,lis[i]);
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
