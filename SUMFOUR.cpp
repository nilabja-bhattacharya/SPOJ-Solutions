/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int a[2555],b[2555],c[2555],d[2555];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
	std::pair<std::vector<int>::iterator,std::vector<int>::iterator> bounds;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			v.push_back((a[i]+b[j]));
		}
	}
	int cnt=0;
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int cd=-(c[i]+d[j]);
			bounds=equal_range(v.begin(),v.end(),cd);
			cnt+=bounds.second-bounds.first;
		}
	}
	cout<<cnt<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
