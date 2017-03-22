#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,t,f;
		cin>>n>>k>>t>>f;
		int ans= (f-n)/(k-1) + f;
		cout<<ans<<"\n";
	}
}
