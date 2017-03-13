/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX 3100

bool p[MAX];
void sieve(){
	p[0]=1;
	p[1]=1;
	for(int i=2;i*i<=MAX;i++){
		if(!p[i])
			for(int j=i*i;j<MAX;j+=i)
				p[j]=1;
	}
}
vector<int> v;
void find(){
	for(int i=43;i<MAX;i++){
		int cnt=0;
		int k=i;
		for(int j=2;j*j<=k;j++){
			if(k%j==0){
    			if(p[j]==0)
    				cnt++;
    			if(p[i/j]==0 && j!=(i/j))
    			    cnt++;
			}
		}
		if(cnt>=3)
			v.push_back(i);
	}
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	sieve();
	v.push_back(30);
	v.push_back(42);
	find();
/*	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";*/
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		//cout<<v[999]<<endl;
		cout<<v[n-1]<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
