/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010][4];
int f(int h,int a, int fl){
	if(a<=0 || h<=0)
		return 0;
	else if(dp[h][a][fl]!=-1)
		return dp[h][a][fl];
	else{
		if(fl==1)
			return dp[h][a][fl]=max(f(h-5,a-10,2),f(h-20,a+5,3)) + 1;
		else if(fl==2)
			return dp[h][a][fl]=max(f(h+3,a+2,1),f(h-20,a+5,3)) + 1;
		else if (fl==3)
		    return	dp[h][a][fl]=max(f(h+3,a+2,1),f(h-5,a-10,2)) + 1;
	}
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		int h,a;
		cin>>h>>a;
		int ans=max(max(f(h,a,1),f(h,a,2)),f(h,a,3));
		cout<<ans-1<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
