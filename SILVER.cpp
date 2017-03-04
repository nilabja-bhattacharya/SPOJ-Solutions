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
	while(1){
		int n;
		cin>>n;
		if(!n)
			break;
		int ans=0;
		while(n>1){
			n>>=1;
			ans++;
		}
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
