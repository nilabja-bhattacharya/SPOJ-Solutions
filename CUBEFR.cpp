/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000010
int cube[110];
vector<int> v;
int bsearch(int t){
	int lo=0;
	int hi=v.size();
	while(lo<=hi){
		int m=(hi+lo)/2;
		if(v[m]==t)
			return m+1;
		else if(v[m]<t)
			lo=m+1;
		else
			hi=m-1;
	}
	return -1;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	for(int i=2;i<101;i++)
		cube[i]=i*i*i;
	v.push_back(1);
	for(int i=2;i<MAX;i++){
		bool fl=1;
		for(int j=2;j<101;j++){
			if(i%cube[j]==0){
				fl=0;
				break;
			}
		}
		if(fl)
			v.push_back(i);
	}
	int t;
	cin>>t;
	int ln=0;
	while(ln<t){
		ln++;
		int n;
		cin>>n;
		int pos=bsearch(n);
	//	cout<<pos<<endl;
		cout<<"Case "<<ln<<": ";
		if(pos==-1)
			cout<<"Not Cube Free\n";
		else
			cout<<pos<<"\n";
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
