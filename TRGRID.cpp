/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		char ans;
		if(n%2==0 && m%2==0){
			if(m>=n)
				ans='L';
			else if(m<n)
				ans='U';
		}
		else if(n%2==0 && m%2!=0){
			if(m<n)
				ans='D';
			else
				ans='L';
		}
		else if(n%2!=0 && m%2==0){
			if(m>n)
				ans='R';
			else
				ans='U';
		}
		else if(n%2 && m%2){
			if(m>=n)
				ans='R';
			else if(m<n)
				ans='D';
		}
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
