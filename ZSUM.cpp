/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
#define D(x) cerr<<#x "="<<x<<endl;
#define MOD 10000007
typedef long long ll;
ll powval(ll n,ll k){
	ll res=1;
	while(k>0){
		if(k&1) res=(res*n)%MOD;
		n=(n*n)%MOD;
		k>>=1;
	}
//	D(res);
	return res%MOD;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	ll n,k;
	while(1){
		cin>>n>>k;
		if(n==0 && k==0)
			break;
		ll ans= 2*1LL*(powval(n-1,k) + powval(n-1,n-1)) + powval(n,k)+powval(n,n);
		cout<<ans%MOD<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
