/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX_N=32000;
typedef long long ll;
ll dp[MAX_N];
bool solve(int n){
	int l=1;
	int h=MAX_N;
	while(l<=h){
		int m= l + (h-l)/2;
		if(dp[m]==n)
			return 1;
		if(n>dp[m])
			l=m+1;
		else if(n<dp[m])
			h=m-1;
		//cout<<dp[m]<<" ";
	}
	return 0;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	ll n;
	for(int i=1;i<MAX_N;i++)
		dp[i]=(ll)(3*(ll)i*(ll)(i-1) + 1);
	while(1){
		cin>>n;
		if(n==-1)
			break;
		if(solve(n))
			cout<<'Y'<<endl;
		else
			cout<<'N'<<endl;

	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
