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
ll sum1[MAX];
ll sum2[MAX];
ll arr1[MAX];
ll arr2[MAX];
int n,m;
int bsearch(int l,int r,int t){
      while(l<=r){
            int m=(l+r)/2;
            if(arr2[m]==t)
                  return m;
            else if(arr2[m]>t)
                  r=m-1;
            else if(arr2[m]<t)
                  l=m+1;
      }
      return -1;
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

	while(1){
		cin>>n;
		if(n==0)
		    break;
		memset(arr1,0,sizeof(arr1));
		memset(arr2,0,sizeof(arr2));
		for(int i=0;i<n;i++){
			cin>>arr1[i];
                  sum1[i+1]=sum1[i]+arr1[i];
            }
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>arr2[i];
                  sum2[i+1] = sum2[i]+arr2[i];
            }
            ll ans=0;
            int y=0,brkpnt1=0,brkpnt2=0,frst=0,scnd=0;
            int s1=0,s2=0;
            for(int i=0;i<n;i++){
                  int x=bsearch(0,m-1,arr1[i]);
                  if(x!=-1){
                        y++;
                        frst=i+1;
                        scnd=x+1;
                        if(y==1){
                              s1=sum1[frst];
                              s2=sum2[scnd];
                        }
                        else{
                              s1=sum1[frst] - sum1[brkpnt1];
                              s2=sum2[scnd] - sum2[brkpnt2];
                        }
                        ans+=max(s1,s2);
                        brkpnt1=i+1;
                        brkpnt2=x+1;
                  }
            }
            if(y>0){
                  s1=sum1[n]-sum1[brkpnt1];
                  s2=sum2[m] - sum2[brkpnt2];
                  ans+=max(s1,s2);
            }
            else{
                  ans=max(sum1[n],sum2[m]);
            }
            cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
