/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

int ans[8];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		string str;
		cin>>str;
		memset(ans,0,sizeof(ans));
		for(int i=0;i<str.length()-2;i++){
			if(str[i]=='T' && str[i+1]=='T' && str[i+2]=='T')
				ans[0]++;
			if(str[i]=='T' && str[i+1]=='T' && str[i+2]=='H')
				ans[1]++;
			if(str[i]=='T' && str[i+1]=='H' && str[i+2]=='T')
				ans[2]++;
			if(str[i]=='T' && str[i+1]=='H' && str[i+2]=='H')
				ans[3]++;
			if(str[i]=='H' && str[i+1]=='T' && str[i+2]=='T')
				ans[4]++;
			if(str[i]=='H' && str[i+1]=='T' && str[i+2]=='H')
				ans[5]++;
			if(str[i]=='H' && str[i+1]=='H' && str[i+2]=='T')
				ans[6]++;
			if(str[i]=='H' && str[i+1]=='H' && str[i+2]=='H')
				ans[7]++;
		}
		cout<<k<<" ";
		for(int i=0;i<8;i++)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
