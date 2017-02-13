/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX_N = 200010;
ll tree[MAX_N], a[MAX_N],b[MAX_N];
int N;
int read(ll idx){
	ll sum=0;
	while(idx>0){
		sum+=tree[idx];
		idx -=(idx & (-idx));
	}
	return sum;
}
void update(ll idx,ll val){
	while(idx<=N+1){
		tree[idx]+=val;
		idx += (idx & (-idx));
	}
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		cin>>N;
		memset(tree,0,sizeof(tree));
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int i=0;i<N;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+N);
		for(int i=0;i<N;i++)
			a[i]= int(lower_bound(b,b+N,a[i]) - b) + 1;
		ll invcnt=0;
		for(int i=N-1;i>=0;i--){
			ll x=read(a[i] - 1);
			invcnt+= x;
			update(a[i],1ll);
		}
		cout<<invcnt<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
