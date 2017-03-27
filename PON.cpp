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
ll mulmod(ll a,ll b,ll p){
	ll x=0;
	ll y=a%p;
	while(b>0){
		if(b&1) x=(x+y)%p;
		y=(y*2)%p;
		b>>=1;
	}
	return x%p;
}
ll modulo(ll a,ll b,ll p){
	ll res=1;
	while(b>0){
		if(b&1) res=mulmod(res,a,p);
		a=mulmod(a,a,p);
		b>>=1;
	}
	return res%p;
}
bool millerrabin(ll p,int itr){
	if(p<2)
		return 0;
	if(p!=2 && !(p&1)) return 0;
	ll s=p-1;
	while(!(s&1))
		s>>=1;
	for(int i=0;i<itr;i++){
		ll a=rand()%(p-1) + 1;
		ll temp=s;
	//	cout<<a<<endl;
		ll mod=modulo(a,temp,p);
		while(temp!=p-1 && mod!=1 && mod!=p-1){
			mod=mulmod(mod,mod,p);
			temp<<=1;
		}
		if(mod!=p-1 && !(temp&1))
			return 0;
	}
	return 1;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(millerrabin(n,1000))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
