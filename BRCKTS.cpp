/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 100000

struct node{
	int open;
	int close;
	void initialize(char val){
	    if(val=='(')
	        open=1,close=0;
	    else
	        open=0,close=1;
	}
	void merge(node &A,node &B){
	    int mn=min(A.open,B.close);
	    open=A.open+B.open-mn;
	    close=B.close+A.close-mn;
	}
}st[MAX];
string arr;
void init(int idx,int l,int r){
	if(l==r){
			st[idx].initialize(arr[l]);
		    return;
	}
	else {
		int m=(l+r)/2;
		init(idx*2+1,l,m);
		init(idx*2+2,m+1,r);
		st[idx].merge(st[idx*2+1],st[idx*2+2]);
	}
}

void update(int idx,int l,int r,int i,char val){
	if(l==r && l==i){
		st[idx].initialize(val);
		return;
	}
	else{
		int m=(l+r)/2;
		if(i<=m)
			update(idx*2+1,l,m,i,val);
		else if(i>m)
			update(idx*2+2,m+1,r,i,val);
		st[idx].merge(st[idx*2+1],st[idx*2+2]);
	}
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	for(int t=0;t<10;t++){
		int n;
		cin>>n;
		arr.clear();
		memset(st,0,sizeof(st));
		cin>>arr;
	//	cout<<arr<<endl;
		init(0,0,n-1);
		int q;
		cin>>q;
		cout<<"Test "<<t+1<<':'<<endl;
		while(q--){
		   // cout<<"c"<<endl;

			int f;
			cin>>f;
			if(f==0){
				if(!st[0].open && !st[0].close)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
			else{
				if(arr[f-1]=='(')
					arr[f-1]=')';
				else
					arr[f-1]='(';
				update(0,0,n-1,f-1,arr[f-1]);
			}
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
