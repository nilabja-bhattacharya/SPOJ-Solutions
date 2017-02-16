#include <bits/stdc++.h>
using namespace std;

int happy(int n){
	int steps=1;
	int ans=0;
	while(n>0){
			int a= n%10;
			ans=ans+a*a;
			n/=10;
	}
	n=ans;
	while(n>9){
		int ans=0;
		while(n>0){
				int a= n%10;
				ans=ans+a*a;
				n/=10;
		}
		n=ans;
		steps++;
	}
//	cout<<ans<<endl;
	if(n==1)
		return steps;
	else
		return -1;
	//cout<<ans<<endl;
}


int main(){
	int n;
	cin>>n;
	cout<<happy(n)<<endl;
}
