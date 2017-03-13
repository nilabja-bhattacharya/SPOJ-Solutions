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

int dp[100][100];
int f(int n,int k){
	if(n==0)
		return 0;
	if(k==0)
		return 1;
	if(dp[n][k]!=-1)
		return dp[n][k];
	else{
		int val=0;
		for(int i=0;i<n && k-i>=0;i++){
			val+=f(n-1,k-i);
		}
		return dp[n][k]=val;
	}
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		memset(dp,-1,sizeof(dp));
		cout<<f(n,k)<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
