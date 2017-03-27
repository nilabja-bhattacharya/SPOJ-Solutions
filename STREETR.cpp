/*
*LINK:
*nilabja16180
*/
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <fstream>
#include <limits>
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
ll arr[MAX];
inline ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	ll n;
	cin>>n;
	cin>>arr[0]>>arr[1];
	ll mngc=0;
	mngc=arr[1]-arr[0];
	for(int i=2;i<n;i++){
		cin>>arr[i];
		mngc=gcd(mngc,arr[i]-arr[i-1]);
	}
	ll ans=0;
	for(int i=1;i<n;i++){
		if(arr[i]-arr[i-1]>mngc)
			ans+=(arr[i]-arr[i-1]-mngc)/mngc;
	}
	cout<<ans<<endl;

	//cout<<"Execution time : "<<tick();
      return 0;
}
