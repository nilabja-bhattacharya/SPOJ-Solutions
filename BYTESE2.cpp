/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
typedef vector<pii> vpii;

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vpii vec;
		for(int i=0;i<n;i++){
			int u,v;
			cin>>u>>v;
			vec.push_back({u,1});
			vec.push_back({v,0});
		}
		sort(vec.begin(),vec.end());
		int ans=0;
		int mx=0;
		for(int i=0;i<vec.size();i++){
			if(vec[i].second)
				ans++;
			else if(vec[i].second==0)
				ans--;
			mx=max(mx,ans);
		}
		cout<<mx<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
