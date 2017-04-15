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
ll powab(ll a,ll b){
	ll res=1;
	while(b>0){
		if(b&1) res=res*a;
		a=a*a;
		b>>=1;
	}
	return res;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int cs=0;
	while(1){
		cs++;
		int n;
		cin>>n;
		if(n==-1)
		    break;
		vector<int> v(n+1);
		for(int i=0;i<=n;i++)
			cin>>v[i];
		int k;
		cin>>k;
		cout<<"Case "<<cs<<":"<<endl;
		for(int j=0;j<k;j++){
			ll ans=0;
			int a1;
			cin>>a1;
			for(int i=0;i<=n;i++){
				ans+=v[i]*powab(a1,(n-i));
			}
			cout<<ans<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
