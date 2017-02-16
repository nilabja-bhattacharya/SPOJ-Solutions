/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

ll f(char ch,ll ans,ll n){
	switch(ch){
		case '+':
			return (ll)(ans+n);
		case '-':
			return (ll)(ans-n);
		case '*':
			return (ll)(ans*n);
		case '/':
			return (ll)(ans/n);
	}
	return 0;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		ll ans;
		cin>>ans;
		char ch;
		ll n;
		while(cin>>ch){
			if(ch=='=')
				break;
			cin>>n;
			ans=f(ch,ans,n);
		}
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
