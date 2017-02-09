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

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string str1,str2,str3;
		char ch1,ch2;
		int a,b,c;
		cin>>str1>>ch1>>str2>>ch2>>str3;
		if(str1.find("machula")!=string::npos){
			b=stoi(str2);
			c=stoi(str3);
			a=c-b;
		}
		else if(str2.find("machula")!=string::npos){
			a=stoi(str1);
			c=stoi(str3);
			b=c-a;
		}
		else if(str3.find("machula")!=string::npos){
			a=stoi(str1);
			b=stoi(str2);
			c=a+b;
		}

		cout<<a<<" + "<<b<<" = "<<c<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
