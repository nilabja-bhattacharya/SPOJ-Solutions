/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
inline int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
ll pow(int n,int k){
	ll res=1;
	while(k>0){
		if(k&1)	res*=n;
		n=n*n;
		k>>=1;
	}
	return res;
}
void solve(string str){
	long long num=0;
	int n=str.size();
	ll cnt=0;
	bool flag=0;
	for(int i=n-1;i>=0;i--){
		if(str[i]=='.'){
			flag=1;
			break;
		}
		cnt++;
	}
	for(int i=0;i<n;i++){
		if(str[i]!='.')
			num=num*10+(str[i]-'0');
	}
	ll frac=1;
	if(flag)
		frac=pow(10,cnt);
	int ans=frac/gcd(frac,num);
	cout<<ans<<endl;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		solve(str);
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
