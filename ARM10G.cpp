/*SPOJ*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<ll> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		sort(v.begin(),v.end());
		ll ans=1e18;
		for(int i=0;i<n-k+1;i++){
			ans=min(v[i+k-1]-v[i],ans);
		//	cout<<v[i]<<" "<<v[i+k-1]<<endl;
		}
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
