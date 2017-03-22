#include <bits/stdc++.h>
using namespace std;
inline int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int ans=abs(a-b)/gcd(abs(a),abs(b));
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
