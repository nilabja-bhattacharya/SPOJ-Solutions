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

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	while(1){
		int n;
		cin>>n;
	//	getchar();
		if(!n)
			break;
	//	string str;
	//	getline(cin,str);
	//	cout<<str<<endl;
	    	int ans=0;
		for(int i=0;i<n;i++){
			string str;
			int val=0;
			cin>>str;
			if(str=="S"){
			//	cout<<str<<endl;
				if(i==n-2)
					ans=ans*18+val;
				else
					ans=ans*20+val;
				continue;
			}
			string str1;
			getline(cin,str1);
			str+=str1;
		//	cout<<str<<endl;
			for(int j=0;j<str.size();j++){
			    	if(str[j]==' ')
			      	continue;
				else if(str[j]=='-')
					val+=5;
				else if(str[j]=='.')
					val+=1;
			}
			if(i==n-2)
				ans=ans*18+val;
			else
				ans=ans*20+val;
		//	cout<<val<<endl;
		//	cout<<ans<<endl;
		}
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
