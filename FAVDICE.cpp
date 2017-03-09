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
		int n;
		cin>>n;
		double ans=0;
		for(int i=n;i>0;i--)
			ans+=(1/(double)i);
		ans*=n;
		printf("%.2f\n",ans);
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
