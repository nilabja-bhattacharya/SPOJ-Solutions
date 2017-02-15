/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX=110;
int dp[MAX][MAX];
int mat[MAX][MAX];
int solve(int n,int m){
	if(n<=0 || m<=0)
		return mat[n][m];
	else if(dp[n][m]!=-1)
		return dp[n][m];
	else
		return dp[n][m]=max(solve(n-1,m),max(solve(n-1,m-1),solve(n-1,m+1))) +mat[n][m];
//	cout<<dp[n][m]<<endl;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int h,w;
		cin>>h>>w;
		memset(dp,-1,sizeof(dp));
		memset(mat,0,sizeof(mat));
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++){
				cin>>mat[i][j];
			}
		}
		int mx=0;
		for(int i=1;i<=w;i++){
			mx=max(mx,solve(h,i));
		}
		cout<<mx<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
