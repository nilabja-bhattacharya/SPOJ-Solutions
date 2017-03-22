#include <bits/stdc++.h>
using namespace std;
#define max(a,b,c) max(a,max(b,c))
int arr[2010];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
	while(1){
		cin>>n;
		if(!n)
			break;
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		int ans=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
					ans+=arr+n-upper_bound(arr+j,arr+n,arr[i]+arr[j]);
			}
		}
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
