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
int z[MAX];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
    string str1;
    string str2;
	while(cin>>n){
		cin>>str1>>str2;
		memset(z,0,sizeof(z));
		string str3 = str1 + "$" + str2;
            //cout<<str3<<endl;
            bool f=0;
		if(str1.length()>str2.length()){
			cout<<endl;
            }
		else{
			for(int i=1,l=0,r=0;i<str3.size();i++){
                        if(i<r)
                              z[i]=min(r-i+1,z[i-l]);
                        while(i+z[i]<str3.size() && str3[z[i]]==str3[i+z[i]])
                              ++z[i];
                        if(i+z[i]-1>r)
                              l=i,r=i+z[i]-1;
                  }
                  for(int i=n+1;i<str3.size();i++){
                        if(z[i]==n){
                              cout<<i-n -1<<endl;
                              f=1;
                        }
                  }
                  if(!f)
                        cout<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
