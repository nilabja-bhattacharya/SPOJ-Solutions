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
	int t;
	cin>>t;
	int k=0;
	while(t--){
	    k++;
		int n;
		cin>>n;
		ll mn=1;
		ll sum=0;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			sum+=a;
			mn=min(mn,sum);
		}
		cout<<"Scenario #"<<k<<": ";
		if(mn<=0)
			cout<<abs(mn-1)<<endl;
		else
			cout<<1<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
