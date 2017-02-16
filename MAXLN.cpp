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
	int i=0;
	while(i<t){
		double r;
		cin>>r;
		double ans=(4.0*r*r + 0.25);
		printf("Case %d: %f\n",i+1,ans);
		i++;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
