/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000000

struct st{
	int vl;
	int wt;
};
st arr[510];
int dp[11000];
int n;
int func(int val){
    if(val==0)
        return 0;
    	if(dp[val]!=-1)
    		return dp[val];
    	else{
    		dp[val]=1e9;
    		for(int i=0;i<n;i++){
    			if(arr[i].wt<=val){
    				dp[val]=min(dp[val],func(val-arr[i].wt) + arr[i].vl);
    			}
    		}
    		//	cout<<dp[val]<<" "<<val<<endl;
    	}

    	return dp[val];
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int e,f;
		cin>>e>>f;
		int val=f-e;
		cin>>n;
		memset(dp,-1,sizeof(dp));
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++)
			cin>>arr[i].vl>>arr[i].wt;
		int ans=func(val);
		if(ans==1e9)
			cout<<"This is impossible."<<endl;
		else{
			cout<<"The minimum amount of money in the piggy-bank is "<<ans<<"."<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
