/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000007
long long dp[1000010];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	dp[0]=0;
	for(int i=1;i<1000010;i++){
		dp[i]=dp[i-1] + i*2 + (i-1);
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<dp[n]%MOD<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
