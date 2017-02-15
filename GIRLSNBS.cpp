/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n,m;
	while(1){
		cin>>n>>m;
		if(n==-1 && m==-1)
			break;
		if(n==0 && m==0)
			cout<<0<<endl;
		else if(n>m)
			cout<<ceil((double)n/(m+1))<<endl;
		else if(m>n)
			cout<<ceil((double)m/(n+1))<<endl;
		else
			cout<<1<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
