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
#define END 1422
int arr[1500];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	while(1){
		int n;
		cin>>n;
		int st=0;
		if(!n)
			break;
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		if(arr[0]!=0)
			cout<<"IMPOSSIBLE"<<endl;
		else{
			for(int i=0;i<n;i++){
				if(arr[i]-st<=200){
					st=arr[i];
				}
				else
					break;
			}
			if(2*(END-st)<=200){
					for(int i=n-2;i>=0;i--){
						if(st-arr[i]<=200){
							st=arr[i];
						}
						else
							break;
					}
				if(st<=200)
					cout<<"POSSIBLE"<<endl;
				else
					cout<<"IMPOSSIBLE"<<endl;
			}
			else
				cout<<"IMPOSSIBLE"<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
