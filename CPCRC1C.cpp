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
typedef unsigned long long ll1;
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
ll dp[MAX];
ll calculate(ll n){
      ll res=0;
      int i=0;
      ll k1=1;
      ll rev=0;
      while(n>0){
            int a=n%10;
            res = res + k1*((a*(a-1))/2)+dp[i]*(a)+a*(rev+1);
            rev=rev+a*k1;
           // cout<<rev<<endl;
            n=n/10;
            k1*=10;
            i++;
           // cout<<res<<endl;
      }
      return res;
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      memset(dp,0,sizeof(dp));
      dp[0]=0;
      ll val=1;
      for(int i=1;i<=11;i++){
            dp[i]=val*45 + dp[i-1]*10;
            val*=10;
           // cout<<dp[i]<<endl;
      }
    //  cout<<dp[9]<<endl;
      while(1){
            ll a,b;
            cin>>a>>b;
            if(a==-1 && b==-1)
                  break;
            ll ans=calculate(b)-calculate(a-1);
            cout<<ans<<endl;
      }
	//cout<<"Execution time : "<<tick();
      return 0;
}
