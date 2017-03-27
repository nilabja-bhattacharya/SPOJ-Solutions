/*
*LINK:
*nilabja16180
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[50];
ll dp[50][50];
int N;
ll f(int n,int k){
	if(n>2*N)
		return k==0?1:0;
	if(dp[n][k]!=-1)
		return dp[n][k];
	dp[n][k]=f(n+1,k+1) + (arr[n] || k==0?0:f(n+1,k-1));
	//cout<<dp[n][k]<<" "<<n<<" "<<k<<endl;
	return dp[n][k];
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int k,x;
		cin>>N>>k;
		memset(arr,0,sizeof(arr));
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<k;i++){
			cin>>x;
			arr[x]=1;
		}
		cout<<f(1,0)<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}

/* Another Solution 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[50];
ll dp[50][50];
int N;
ll f(int n,int k){
	if(k<0)
	    return 0;
	if(n==0 && k==0)
	    return dp[n][k]=1;
	if(n==0 && k>0)
	    return dp[n][k]=0;
	if(dp[n][k]!=-1)
		return dp[n][k];
        ll val;
        if(arr[n])
            val=f(n-1,k-1);
        else
            val=f(n-1,k+1)+f(n-1,k-1);
    dp[n][k]=val;
//	cout<<dp[n][k]<<" "<<n<<" "<<k<<endl;
	return dp[n][k];
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int k,x;
		cin>>N>>k;
		memset(arr,0,sizeof(arr));
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<k;i++){
			cin>>x;
			arr[x]=1;
		}
		cout<<f(2*N,0)<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
*/
