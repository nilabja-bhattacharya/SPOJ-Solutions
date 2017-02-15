#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool f(vector<int> v,int m,int k){
	ll cows=1;
	int lst_pos=v[0];
	for(int i=1;i<v.size();i++){
		if(v[i]-lst_pos>=m){
			cows++;
			if(cows==k)
				return 1;
		lst_pos=v[i];
		}
	}
	return 0;
}
ll solve(vector<int> v,int k){
	int l=0;
	int h=v[v.size()-1] - v[0];
	while(l+1<h){
		int m = (h+l)/2;
		if(f(v,m,k)){
			l=m;
		}
		else{
			h=m;
		}
	}
	return l;
}
int main(){
		int t;
		cin>>t;
		while(t--){
			int n;
			int k;
			cin>>n>>k;
			vector<int> v(n);
			for(int i=0;i<n;i++)
				cin>>v[i];
			sort(v.begin(),v.end());
			cout<<solve(v,k)<<endl;
		}

}
