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
int dp[MAX];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	string str;
	while(1){
		cin>>str;
		if(str=="0")
			break;
		if(str[0]=='0'){
			cout<<0<<endl;
		}
		else{
			dp[0]=1;
			dp[1]=1;
			bool fl=0;
			for(int i=1;i<str.size();i++){
				if(str[i]!=0)
					dp[i+1]=dp[i];
				else
					dp[i+1]=dp[i-1];
				int temp=0;
				if(str[i-1]!='0')
				 	temp=(str[i-1]-'0')*10 + (str[i]-'0');
				if(temp<=26 && temp>0 && str[i]!='0' && str[i+1]!='0'){
					dp[i+1]+=dp[i-1];
				}
				if(str[i]=='0' && str[i-1]!='2' && str[i-1]!='1'){
					cout<<0<<endl;
					fl=1;
					break;
				}
				D(dp[i+1]);
			}
			if(!fl)
				cout<<dp[str.size()]<<endl;
		}

	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
