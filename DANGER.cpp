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
		string str;
		cin>>str;
		if(str=="00e0")
			break;
		else{
			int n=((int)(str[0]-'0')*10+(int)(str[1]-'0'))*pow(10,(int)(str[3]-'0'));
			int k=1;
			//cout<<n<<endl;
			while(k<n){
				k<<=1;
			}
			int ans=0;
			if(k==n)
				ans=1;
			else{
				ans=(n-(k>>1))*2+1;
			}
			cout<<ans<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
