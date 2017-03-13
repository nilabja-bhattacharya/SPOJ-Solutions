#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		printf("%lld\n",(ll)(a*a-2*b));
	}
	return 0;
}
