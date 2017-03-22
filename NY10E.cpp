/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dp[100][10];
ll f(int n,int k){
	if(n==0)
		return 1;
	else if(dp[n][k]!=-1)
		return dp[n][k];
	else{
		ll val=0;
		for(int i=k;i<10;i++){
			val+=(ll)f(n-1,i);
		}
		return dp[n][k]=val;
	}
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	memset(dp,-1,sizeof(dp));
	for(int i=64;i>=0;i--){
		dp[i][0]=f(i,0);
	}
	int t;
	cin>>t;
	while(t--){
		int n,ds;
		cin>>ds>>n;
		cout<<ds<<" "<<dp[n][0]<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
