/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll fst3,lst,sum=0;
		cin>>fst3>>lst>>sum;
		ll len=(2*sum/(lst + fst3));
		cout<<len<<endl;
		ll d = (ll)((ll)(lst-fst3)/(len-5));
		ll fst1=fst3-2*d;
		for(ll i=0;i<len;i++){
			cout<<(ll)(fst1+i*d)<<" ";
		}
		cout<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
