/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[100100];
ll n;
ll histo(){
	stack<ll> st;
	int i=0;
	ll max_area=0;
	while(i<n){
		if(st.empty() || arr[st.top()]<=arr[i])
			st.push(i++);
		else{
			ll tp=st.top();
			st.pop();
			ll area=arr[tp] * (st.empty()?i:i-st.top()-1);
			max_area=max(max_area,area);
		}
	}
	while(!st.empty()){
		ll tp=st.top();
		st.pop();
		ll area=arr[tp] * (st.empty()?i:i-st.top()-1);
		max_area=max(max_area,area);
	}
	return max_area;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	while(1){
		memset(arr,0,sizeof(arr));
		cin>>n;
		if(!n)
			break;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<histo()<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
