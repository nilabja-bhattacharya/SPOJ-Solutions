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

//int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
//int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
typedef long long ll;
void multiply(ll F[2][2],ll M[2][2]){
	ll w=((F[0][0]*M[0][0])+(F[0][1]*M[1][0]))%MOD;
	ll x=((F[0][0]*M[0][1])+(F[0][1]*M[1][1]))%MOD;
	ll y=((F[1][0]*M[0][0])+(F[1][1]*M[1][0]))%MOD;
	ll z=((F[1][0]*M[0][1])+(F[1][1]*M[1][1]))%MOD;
	F[0][0]=w;
	F[0][1]=x;
	F[1][0]=y;
	F[1][1]=z;
}
void power(ll F[2][2],int n){
	ll M[2][2]={{1,1},{1,0}};
	if(n==0 || n==1)
	    return;
	power(F,n/2);
	multiply(F,F);
	if(n%2!=0)
	    multiply(F,M);
}
ll fib(int n){
	if(n<=0)
		return 0;
	ll F[2][2]={{1,1},{1,0}};
	power(F,n-1);
	return F[0][0]%MOD;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a=fib(m+2);
		int b=fib(n+1);
	//	cout<<a<<" "<<b<<endl;
		int ans=(a-b+MOD)%MOD;
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
