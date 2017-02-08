/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	long long t;
	scanf("%lld",&t);
	while(t--){
		long long int n;
		scanf("%lld",&n);
		long long int sum=0;
		for(int i=0;i<n;i++){
			long long int a;
			scanf("%lld",&a);
			sum=(sum+a)%n;
		}
		if(sum==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
