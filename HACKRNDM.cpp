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

int n,k;
int arr[MAX];
int bsearch(int a,int i){
	int l=i;
	int r=n-1;
	int cnt=0;
	while(l<=r){
		int m=(l+r)/2;
		if(abs(arr[m]-a)==k)
			cnt++;
		if(abs(arr[m]-a)>=k)
			r=m-1;
		else if(abs(arr[m]-a)<k)
			l=m+1;
	}
	l=0;
	r=i;
	while(l<=r){
		int m=(l+r)/2;
		if(abs(arr[m]-a)==k)
			cnt++;
		if(abs(arr[m]-a)>=k)
			l=m+1;
		else if(abs(arr[m]-a)<k)
			r=m-1;
	}
	return cnt;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	int ans=0;
	for(int i=0;i<n;i++){
		int a=arr[i];
		ans+=bsearch(arr[i],i);
	}
	cout<<ans/2<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
