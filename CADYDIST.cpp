/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool cmp(ll a,ll b){
	return a>b;
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	while(1){
		ll n;
		cin>>n;
		if(n==0)
		    break;
		vector<ll> s(n);
		vector<ll> c(n);
		for(int i=0;i<n;i++)
			cin>>s[i];
		for(int j=0;j<n;j++)
			cin>>c[j];
		sort(c.begin(),c.end());
		sort(s.begin(),s.end(),cmp);
		ll ans=0;
		for(int i=0;i<n;i++)
			ans+=(ll)((ll)s[i]*(ll)c[i]);
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
