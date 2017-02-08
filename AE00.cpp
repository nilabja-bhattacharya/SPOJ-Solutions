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
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i*i<=n;i++)
		sum+=(n/i) - (i-1);
	cout<<sum<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
