/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll arr[110][110];

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		memset(arr,-1,sizeof(arr));
	//	memset(dp,-1,sizeof(dp));
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				cin>>arr[i][j];
			}
		}
		ll ans=0;
		for(int i=n-2;i>=0;i--){
			for(int j=0;j<=i;j++){
				arr[i][j]+=max(arr[i+1][j],arr[i+1][j+1]);
			}
		}
		cout<<arr[0][0]<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}

/* Working Code
 #include <iostream>
using namespace std;int a[100][100];main() {int t;cin>>t;while(t--){int n,i=0,j;cin>>n;for(;i<n;i++)for(j=0;j<=i;j++)cin>>a[i][j];for(i=n-2;i>=0;i--)for(int j=0;j<i+1;j++)a[i][j]+=max(a[i+1][j],a[i+1][j+1]);cout<<a[0][0]<<"\n";}}
*/
