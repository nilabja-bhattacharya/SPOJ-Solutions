/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll ans=((ll)(((ll)n*(ll)(n+2)*(ll)(2*n+1))/8));
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
