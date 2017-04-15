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
string str;
int dp[32][1000];
int n;
int f(int l,int sum,int sum1){
	if(l==n-1)
		return 1;
	else if(dp[l][sum1]!=-1)
		return dp[l][sum1];
	int cnt=1;
	int a=0;
	for(int i=l+1;i<n;i++){
		a +=(str[i-1]-'0');
		if(a<=(sum-a) && sum1<=a){
			cnt+=f(i,(sum-a),a);
		//	cout<<i<<" ";
		//	cout<<cnt<<' '<<sum1<<" "<<a<<" "<<sum-a<<" "<<l<<endl;
		}

	}
//	cout<<cnt<<" "<<l<<endl;
	return dp[l][sum1]=cnt;
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int k=0;
	while(1){
		k++;
		cin>>str;
		n=str.size();
		int sum=0;
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<n;i++)
			sum+=(str[i]-'0');
		if(str=="bye")
			break;
		cout<<k<<". "<<f(0,sum,0)<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
