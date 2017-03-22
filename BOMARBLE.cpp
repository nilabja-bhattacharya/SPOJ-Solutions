/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

int dp[1010];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	dp[0]=0;
	for(int i=1;i<=1000;i++){
		dp[i]=(i*(i+1)*5)/2 - ((i-1)*(3+(3+(i-2)*2)))/2;
	}
	while(1){
		int n;
		cin>>n;
		if(!n)
			break;
		cout<<dp[n]<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
