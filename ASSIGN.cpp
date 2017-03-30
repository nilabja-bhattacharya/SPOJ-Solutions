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
const int MAX_N=20;

ll dp[1<<MAX_N];
bool arr[MAX_N][MAX_N];

int countbits(int k,int n){
      int cnt=0;
      for(int i=0;i<n;i++)
            if(((k>>i) & 1))
                  cnt++;
      return cnt;
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin>>t;
      while(t--){
            int n;
            cin>>n;
            for(int i=0;i<n;i++)
                  for(int j=0;j<n;j++)
                        cin>>arr[i][j];
            memset(dp,0,sizeof(dp));
            dp[0]=1;
            for(int i=1;i<(1<<n);i++){
                  int j=countbits(i,n);
                  dp[i]=0;
                  for(int k=0;k<n;k++){
                        if(arr[j-1][k] && ((i>>k) & 1))
                              dp[i]+=dp[i & ~(1<<k)];
                        //cout<<!(1<<k)<<" "<<~(1<<k)<<" ["<<(i& ~(1<<k))<<endl;
                  }

            }
            cout<<dp[(1<<n) - 1]<<endl;
      }
	//cout<<"Execution time : "<<tick();
      return 0;
}
