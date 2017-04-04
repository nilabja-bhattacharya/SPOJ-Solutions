/*
*LINK:
*nilabja16180
*/
#include <bits/stdc++.h>
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
vector< pair< pair<int,int> , int > > table;
int dp[25][80][1010];
int f(int co,int cn,int n){
	if(dp[co][cn][n]!=-1)
		return dp[co][cn][n];
	if(co==0 && cn==0)
		return 0;
	if(n==0)
		return INF;
	dp[co][cn][n]=min(f(co,cn,n-1),f(max(co-table[n-1].first.first,0),max(cn-table[n-1].first.second,0),n-1)+table[n-1].second);
//    cout<<dp[co][cn][n]<<" "<<n<<endl;
    return dp[co][cn][n];

}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int oxy,nt,n;
		cin>>oxy>>nt;
		cin>>n;
		table.clear();
		table.resize(n);
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<n;i++){
			cin>>table[i].first.first>>table[i].first.second>>table[i].second;
		}
		cout<<f(oxy,nt,n)<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
