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
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(b==0)
			a=1;
		else{
			b=(b%4);
			if(b==0)
				a=pow(a,4);
			else
				a=pow(a,b);
			a=a%10;
		}
		cout<<a<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
