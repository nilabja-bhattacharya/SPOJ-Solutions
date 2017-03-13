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
#define MAX 10000000
typedef long long ll;
int dp[500010];
int arr[MAX];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    memset(arr,0,sizeof(arr));
	dp[0]=0;
	dp[1]=1;
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<500000;i++){
		int a1=dp[i-1]-i;
		int a2=dp[i-1]+i;
		if(a1<0){
			dp[i]=a2;
			arr[a2]=1;
		}
		else if(arr[a1]==1){
			dp[i]=a2;
			arr[a2]=1;
		}
		else{
			dp[i]=a1;
			arr[a1]=1;
		}
	//	cout<<a1<<" "<<a2<<endl;
	}
	/*for(int i=0;i<1000;i++)
		cout<<dp[i]<<' ';*/
	while(1){
	    int n;
	    cin>>n;
	    if(n==-1)
	        break;
	    cout<<dp[n]<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
