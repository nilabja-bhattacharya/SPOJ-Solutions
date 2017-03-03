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

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		vector<int> v1(n);
		for(int i=0;i<n;i++)
			cin>>v1[i];
		cin>>m;
		vi v2(m);
		for(int i=0;i<m;i++)
			cin>>v2[i];
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		int ans=INT_MAX;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				ans=min(abs(v1[i]-v2[j]),ans);
			}
		}
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
