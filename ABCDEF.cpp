/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
#define MAX 1000010
using namespace std;
vector<int> arr;
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				arr.push_back((v[i]*v[j]) + v[k]);
			}
		}
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
	    if(v[i]!=0){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				int val=v[i]*(v[j]+v[k]);
				int lo=lower_bound(arr.begin(),arr.end(),val)-arr.begin();
				int hi = upper_bound(arr.begin(),arr.end(),val)-arr.begin();
				cnt+=(hi-lo);
			}
		}
	    }
	}

	cout<<cnt<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
