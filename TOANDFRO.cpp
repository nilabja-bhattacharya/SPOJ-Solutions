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
	while(1){
		int n;
		cin>>n;
		if(n==0)
			break;
		string str;
		cin>>str;
		string ans;
		int k1=n*2-1;
		for(int i=0;i<n;i++){
			for(int j=0;j<str.length()/n;j+=2){
					ans+=str[j*n + i];
					if(j<(str.length()/n)-1)
						ans+=str[j*n + k1 + i];
			//cout<<j*n+i<<" "<<str[j*n + i]<<" "<<j*n + k1 + i<<" "<<str[(j)*n + k1 + i]<<endl;
			}
				k1-=2;
		}
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
