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
	vector< string > v(n);
	set< string > frnd;
	for(int i=0;i<n;i++){
		int m;
		cin>>v[i];
		cin>>m;
		for(int i=0;i<m;i++){
			string str;
			cin>>str;
			frnd.insert(str);
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		string str1=v[i];
		if(frnd.find(str1)!=frnd.end())
			cnt++;
	}
	cout<<frnd.size()-cnt<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
