#include <bits/stdc++.h>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000000

//#define write(x) freopen(x,"w",stdout);
//#define read(x) freopen(x,"r",stdin);
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
ll tree[1030][1030];
int N;
void updatey(int x,int y,lli val){
      while(y<=N){
            tree[x][y]+=val;
            y+=(y & (-y));
      }
}
void update(int x,int y,lli val){
      while(x<=N){
            updatey(x,y,val);
            x+=(x & (-x));
      }
}
lli ready(int x,int y){
      lli sum=0;
      while(y>0){
            sum+=tree[x][y];
            y-=(y & (-y));
      }
      return sum;
}
lli read(int x,int y){
      lli sum=0;
      while(x>0){
            sum+=ready(x,y);
            x-=(x & (-x));
      }
      return sum;
}
int main() {
     // ios_base::sync_with_stdio(false);
      //cin.tie(NULL);
      int t;
      scanf("%d",&t);
      while(t--){
            scanf("%d",&N);
            memset(tree,0,sizeof(tree));
            char str[5];
            while(1){
              //  cout<<1<<endl;
                scanf("%s",str);
                if(strcmp(str,"SET")==0){
                      int x,y;
                      lli val;
                      scanf("%d %d %lld",&x,&y,&val);
                      //changes here
                      int a1=read(x+1,y+1)- read(x,y+1)-read(x+1,y)+read(x,y);
                      //int a1=read(x+1,y+1)-read(x,y);
                      update(x+1,y+1,-a1);
                      update(x+1,y+1,val);
                }
                else if(strcmp(str,"SUM")==0){
                      int x1,y1,x2,y2;
                      scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
                      //changes here
                      lli ans=read(x2+1,y2+1)+read(x1,y1)-read(x1,y2+1)-read(x2+1,y1);
                      printf("%lld\n",ans);
                }
                else if(strcmp(str,"END")==0)
                    break;
            }
            printf("\n");
      }
	//cout<<"Execution time : "<<tick();
      return 0;
}
