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
bool cmp(int i,int j){
	return i>j;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	int f=1;
	while(f<=t){
		int n,m;
		cin>>n>>m;
		vector<int> v(m);
		for(int i=0;i<m;i++)
			cin>>v[i];
		sort(v.begin(),v.end(),cmp);
		int cnt=0;
		int sum=0;
		while(sum<n && cnt<m){
			sum+=v[cnt];
			cnt++;
		}
		cout<<"Scenario #"<<f<<":"<<endl;
		if(sum<n)
			cout<<"impossible"<<endl;
		else
			cout<<cnt<<endl;
		cout<<endl;
		f++;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
