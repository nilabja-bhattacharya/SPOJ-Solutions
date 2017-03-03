/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
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
			int gc=gcd(a,b);
			int x=b/gc;
			int y=a/gc;
			cout<<x<<" "<<y<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
