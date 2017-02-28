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
	string str;
	int t=1;
	while(1){
		cin>>str;
		if(str[0]=='-'){
			break;
		}
		stack<char> st;
		int ans=0;
		for(int i=0;i<str.size();i++){
			if(!st.empty()){
				char a=st.top();
				if(str[i]=='}' && a=='{')
					st.pop();
				else{
					st.push(str[i]);
				}
			}
			else{
				st.push(str[i]);
			}
	//		cout<<st.top()<<endl;
		}
		while(!st.empty()){
			char a1=st.top();
			st.pop();
			char a2=st.top();
			st.pop();
			if((a1=='{' && a2=='{') || (a1=='}' && a2=='}'))
				ans++;
			else if(a2=='}' && a1=='{')
				ans+=2;

		}
		cout<<t<<'.'<<" "<<ans<<endl;
		t++;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
