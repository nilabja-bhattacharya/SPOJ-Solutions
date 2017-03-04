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
		string str;
		cin>>str;
		bool fl=0;
		for(int i=0,j=str.size()-1;i<=j;i++,j--){
			if(str[i]!=str[j]){
				fl=1;
				break;
			}
		}
		if(!fl)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
