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
	int a,d;
	while(1){
		cin>>a>>d;
		if(a==0 && d==0)
			break;
		int m1,m2,m3;
		m1=m2=m3=1e7;
		for(int i=0;i<a;i++){
			int f;
			cin>>f;
			m1=min(f,m1);
		}
		for(int i=0;i<d;i++){
			int b;
			cin>>b;
			if(b<m2){
				m3=m2;
				m2=b;
			}
			else if(b<m3)
				m3=b;
		}
	//	cout<<m1<<" "<<m2<<" "<<m3<<endl;
		if(m2<=m1 && m3<=m1)
			cout<<"N"<<endl;
		else
			cout<<"Y"<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
