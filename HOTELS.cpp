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
	int n,m;
	cin>>n>>m;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int vl=0,ans=0;
	int i=0,j=0;
	for(i=0;i<n && j<=i;i++){
		if(vl+v[i]<=m){
			vl+=v[i];
		}
		else if(vl+v[i]>m){
			vl-=v[j];
			j++;
			i--;
		}
		if(vl<=m && ans<vl)
			ans=vl;
	}
	cout<<ans<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
