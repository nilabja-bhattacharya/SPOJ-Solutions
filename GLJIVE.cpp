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
	int ans=0;
	for(int i=0;i<10;i++){
		int a;
		cin>>a;
		if(abs(100-ans)==abs(100-(ans+a)) && (ans+a)>100){
			ans+=a;
			break;
		}
		else if(abs(100-ans)>abs(100-(ans+a)) && (ans+a)>100){
			ans+=a;
			break;
		}
		else if(abs(100-ans)<abs(100-(ans+a)) && (ans+a)>100)
			break;
		else{
			ans+=a;
		}
	}
	cout<<ans<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
