#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[10010];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		ll n;
		memset(arr,0,sizeof(arr));
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		ll ans=0;
		for(ll i=n-1;i>=0;i--){
		    ans=ans+(i*arr[i])-(((n-1)-i)*arr[i]);
		}
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
