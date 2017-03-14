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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k=n;
		int f=0;
		if(n&1)
			cout<<n<<endl;
		else{
			while(k>0){
				f++;
				k>>=1;
			}
			//cout<<f<<endl;
			int ans=0;
			for(int i=0;i<f;i++){
				ans<<=1;
				if(n&(1<<i))
					ans=ans | 1;
			//	cout<<ans<<endl;
			}
			cout<<ans<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
