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
#include <stack>
#include <queue>
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
int parent[MAX];
int value[MAX];

void bfs(int n){
	queue<int> q;
	q.push(1);
	parent[1]=0;
	while(!q.empty()){
		int current=q.front();
		q.pop();
		if(current==0){
			stack<int> st;
			while(parent[current]){
				st.push(value[current]);
				current=parent[current];
			}
			st.push(1);
			while(!st.empty()){
				cout<<st.top();
				st.pop();
			}
			cout<<endl;
			break;
		}
		int temp=(current*10);
		int t1=temp%n;
		if(parent[t1]==-1){
			q.push(t1);
			parent[t1]=current;
			value[t1]=0;
		}
		int t2=(t1+1)%n;
		if(parent[t2]==-1){
			q.push(t2);
			parent[t2]=current;
			value[t2]=1;
		}
	}
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<1<<endl;
			continue;
		}
		memset(parent,-1,sizeof(parent));
		memset(value,-1,sizeof(value));
		bfs(n);
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
