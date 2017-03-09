/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
int arr[110][110];
int dp[110][110];
int n,m;
int f(int i,int j){
    if(j<0 || j>=m)
        return INT_MAX;
	if(i==0)
		return arr[i][j];
	if(dp[i][j]!=-1)
		return dp[i][j];
	else{
		dp[i][j]=INT_MAX;
		dp[i][j]=min(min(f(i-1,j),f(i-1,j-1)),f(i-1,j+1))+arr[i][j];
	}
	return dp[i][j];
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	cin>>n>>m;
	int ans=INT_MAX;
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];

	for(int i=0;i<m;i++)
		ans=min(ans,f(n-1,i));
	cout<<ans<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
