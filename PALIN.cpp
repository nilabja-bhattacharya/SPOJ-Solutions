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
void allnine(string str){
	cout<<1;
	cout<<str<<endl;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		string str1=str;
		bool fl=0;
		for(int i=0,j=str1.size()-1;i<j;i++,j--)
			str1[j]=str1[i];
		if(str1>str)
			cout<<str1<<endl;
		else{
			if(str1.size()%2==0){
				if(str1[str1.size()/2]<'9'){
					str1[str1.size()/2-1]=(char)(str1[str1.size()/2-1]+ 1);
					str1[str1.size()/2]=str1[str1.size()/2-1];
				}
				else{
					int k=0;
					for(int i=str1.size()/2-1,j=str1.size()/2;i>=0 && j<str.size();i--,j++){
						if(str1[i]=='9'){
							str1[i]='0';
							str1[j]='0';
							k++;
						}
						else{
							str1[i]=(char)(str[i]+1);
							str1[j]=str1[i];
							break;
						}
					}
					if(k==str1.length()/2){
						str1[str.length()-1]='1';
						allnine(str1);
						fl=1;
					}
				}
			}
			else{
				if(str1[str1.size()/2]<'9')
					str1[str1.size()/2]=(char)(str1[str1.size()/2] + 1);
				else{
					int k=0;
					str1[str1.length()/2]='0';
					for(int i=str1.size()/2-1,j=str1.size()/2+1;i>=0 && j<str.size();i--,j++){
						if(str1[i]=='9'){
							str1[i]='0';
							str1[j]='0';
							k++;
						}
						else{
							str1[i]=(char)(str[i]+1);
							str1[j]=str1[i];
							break;
						}
					}
					if(k==str1.length()/2){
						str1[str.length()-1]='1';
						allnine(str1);
						fl=1;
					}
				}
			}
			if(!fl)
				cout<<str1<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
