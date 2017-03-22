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
		long long k;
		cin>>k;
		string str;
		long long pos=0;
		int f=1;
		ll val=0;
		while(pos<k){
			f<<=1;
			val++;
			pos=pos+f;
		}
		ll diff=k-pos-1;
		ll k1=diff;
		for(int i=val-1;i>=0;i--){
			if(diff&1<<i)
				str+='6';
			else
				str+='5';
		}
		cout<<str<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
