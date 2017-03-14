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

ll dp[2010][2010];
vector<int> agn;
vector< vector<int> > tom;
void input(){
	int a;
	for(int i=0;;i++){
		cin>>a;
		if(!a)
			break;
		agn.push_back(a);
	}
}
void inputarr(){
	vector<int> arr;
	int a;
	for(int i=0;;i++){
		cin>>a;
		if(!a)
			break;
		arr.push_back(a);
		for(int j=0;;j++){
			cin>>a;
			if(!a)
				break;
			arr.push_back(a);
		}
		tom.push_back(arr);
		arr.clear();
	}
}

int lcs(int i,int j,int k){
	if(i==0 || j==0)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	else{
		if(tom[k][i-1]==agn[j-1])
			dp[i][j]=1+lcs(i-1,j-1,k);
		else
			dp[i][j]=max(lcs(i-1,j,k),lcs(i,j-1,k));
		return dp[i][j];
	}
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int d;
	cin>>d;
	while(d--){
	    tom.clear();
	    agn.clear();
		input();
		inputarr();
		int n=tom.size();
		int ans=0;
		for(int i=0;i<n;i++){
			memset(dp,-1,sizeof(dp));
			int n1=tom[i].size();
			int n2=agn.size();
			ans=max(ans,lcs(n1,n2,i));
		}
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
