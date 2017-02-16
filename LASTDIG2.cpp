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
		string a;
		ll b;
		cin>>a>>b;
		if(b==0)
			cout<<1<<endl;
		else{
			if(b%4==0)
				b=4;
			else
				b=b%4;
			int n=a.size();
			int f=(int)(a[n-1]-'0');
			f=pow(f,b);
			cout<<f%10<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
