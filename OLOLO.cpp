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
	int ans=0;
	for(int i=0;i<t;i++){
		int u;
		cin>>u;
		ans^=u;
	}
	cout<<ans<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
