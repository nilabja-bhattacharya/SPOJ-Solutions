/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
typedef vector<pii> vpii;

bool cmp(pii a,pii b){
	return a.second<b.second;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vpii v(n);
		for(int i=0;i<n;i++)
			cin>>v[i].first>>v[i].second;
		sort(v.begin(),v.end(),cmp);
		int ans=1;
		int j=0;
		for(int i=1;i<n;i++){
			if(v[i].first>=v[j].second){
				ans++;
				j=i;
			}
		}
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
