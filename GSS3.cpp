/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
struct node{
	int mxsum,mxleftsum,mxrightsum,sum;
	void initialize(int x){
		mxsum=mxrightsum=mxleftsum=sum=x;
	}
	void merge(node &A,node &B){
		sum=A.sum+B.sum;
		mxleftsum = max(A.mxleftsum,A.sum+B.mxleftsum);
		mxrightsum = max(B.mxrightsum,B.sum+A.mxrightsum);
		mxsum = max(max(A.mxsum,B.mxsum),A.mxrightsum+B.mxleftsum);
	}
};
int arr[MAX];
node st[2*MAX];
void init(int idx,int l,int r){
	if(l==r){
	 	st[idx].initialize(arr[l]);
		return;
	}
	else{
		int m = (l+r)/2;
		init(idx*2+1,l,m);
		init(idx*2+2,m+1,r);
		st[idx].merge(st[2*idx+1],st[2*idx+2]);
	}
}

void update(int idx,int l,int r,int i,int val){
	if(l==r && i==l){
		st[idx].initialize(val);
		return;
	}
	else{
		int m = (l+r)/2;
		if(i<=m)
			update(2*idx+1,l,m,i,val);
		else if(i>m)
			update(2*idx+2,m+1,r,i,val);
		st[idx].merge(st[2*idx+1],st[2*idx+2]);
	}
}
void query(node &res,int idx,int l,int r,int u,int v){
	if(u==l && v==r){
            res=st[idx];
            return;
      }
      else{
            int m = l + (r-l)/2;
            if(m>=v)
                  query(res,2*idx+1,l,m,u,v);
            else if(m<u)
                  query(res,2*idx+2,m+1,r,u,v);
            else{
                  node left,right;
                  query(left,2*idx+1,l,m,u,m);
                  query(right,2*idx+2,m+1,r,m+1,v);
                  res.merge(left,right);
            }
      }
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
	cin>>n;
	memset(arr,0,sizeof(arr));
	memset(st,0,sizeof(st));
	for(int i=0;i<n;i++)
		cin>>arr[i];
	init(0,0,n-1);
	int m;
	cin>>m;
	while(m--){
		int q,x,y;
		cin>>q>>x>>y;
		if(q==0){
			update(0,0,n-1,x-1,y);
		}
		else{
			node res;
			query(res,0,0,n-1,x-1,y-1);
			cout<<res.mxsum<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
