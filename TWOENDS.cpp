/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

int arr[1010];
int dp[1010][1010];
int f(int l,int r){
	if(l>=r)
		return 0;
	else if(dp[l][r]!=-1)
		return dp[l][r];
	else{
		int a1=0,a2=0;
		if(arr[l+1]>=arr[r])
			a1=f(l+2,r)+arr[l]-arr[l+1];
		else
			a1=f(l+1,r-1)+arr[l]-arr[r];
		if(arr[l]>=arr[r-1])
			a2=f(l+1,r-1)+arr[r]-arr[l];
		else
			a2=f(l,r-2)+arr[r]-arr[r-1];
		int ans=max(a1,a2);
	//	cout<<ans<<endl;
		return dp[l][r]=ans;
	}
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
	int cnt=0;
	while(1){
		cnt++;
		cin>>n;
		memset(dp,-1,sizeof(dp));
		memset(arr,0,sizeof(arr));
		if(!n)
			break;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<"In game "<<cnt<<", the greedy strategy might lose by as many as "<<f(0,n-1)<<" points."<<"\n";
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
