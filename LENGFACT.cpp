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
#define EXP 2.7182818284590452353
#define MOD 1000000007
#define MAX 10000000
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		double ans = (double)((double)(n*log10(n/EXP)+log10(2*PI*n)/2.0));
		if(n==0 || n==1)
			ans=0;
		cout<<(long long)(ans+1.0)<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
