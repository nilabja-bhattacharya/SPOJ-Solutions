/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX_N=2010;
int dp[MAX_N][MAX_N];
int solve(string str1,string str2){
	int m=str1.size();
	int n=str2.size();
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0)
				dp[i][j]=j;
			else if(j==0)
				dp[i][j]=i;
			else if(str1[i-1]==str2[j-1])
				dp[i][j]=dp[i-1][j-1];
			else dp[i][j] = 1 + min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
			//cout<<dp[i][j]<<" ";
		}
	//	cout<<endl;
	}
		return dp[m][n];
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string str1,str2;
		cin>>str1>>str2;
		memset(dp,0,sizeof(dp));
		cout<<solve(str1,str2)<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
