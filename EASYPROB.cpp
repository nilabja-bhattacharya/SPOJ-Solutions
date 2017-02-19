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

void f(int n){
	if(n==0){
		cout<<0;
		return ;
	}
	else if(n==1){
		cout<<2;
		return;
	}
	else{
	//	cout<<n<<endl;
		bool fl=0;
		for(int i=16;i>=0;i--){
			if((n&(1<<i))){
			//	cout<<i<<endl;
				if(fl)
						cout<<"+";
				if((i+1) != 2){
					cout<<2<<"(";
					f(i);
					cout<<")";
				}
				else{
					f(i);
				}
				fl=1;
			}
		}
	}
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int arr[]={137,1315,73,136,255,1384,16385};
	for(int i=0;i<7;i++){
		cout<<arr[i]<<"=";
		f(arr[i]);
		cout<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
