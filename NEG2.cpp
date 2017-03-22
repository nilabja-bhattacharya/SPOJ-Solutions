/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
#define D(x) cerr<<#x"="<<(x)<<endl;
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	long long n;
	cin>>n;
	string str;
	if(n==0)
		cout<<0<<endl;
	else{
		while(n!=0){
			if(n%2)
				str+='1';
			else
				str+='0';
			if(n<0)
				n=abs((n-1))/2;
			else
				n=-(n)/2;
		//	D(n);
		}
		//str+='1';
		reverse(str.begin(),str.end());
		cout<<str<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
