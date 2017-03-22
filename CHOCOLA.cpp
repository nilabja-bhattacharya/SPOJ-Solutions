
#include <bits/stdc++.h>
using namespace std;
vector<int> col;
vector<int> row;

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		col.clear();
		row.clear();
		int m,n;
		cin>>m>>n;
		for(int i=0;i<m-1;i++){
			int a;
			cin>>a;
			col.push_back(a);
		}
		for(int i=0;i<n-1;i++){
			int a;
			cin>>a;
			row.push_back(a);
		}
		sort(col.begin(),col.end());
            reverse(col.begin(),col.end());
            sort(row.begin(),row.end());
            reverse(row.begin(),row.end());
            int i=0,j=0;
            int ans=0;
            int h=1,v=1;
            while(i<m-1 && j<n-1){
                  if(col[i]>=row[j]){
                        ans+=col[i]*h;
                        v++;
                        i++;
                  }
                  else{
                        ans+=row[j]*v;
                        h++;
                        j++;
                  }
            }
            if(i<m-1){
                  int sum=0;
                  while(i<m-1){
                        sum+=col[i];
                        i++;
                  }
                  ans+=sum*h;
            }
            else if(j<n-1){
                  int sum=0;
                  while(j<n-1){
                        sum+=row[j];
                        j++;
                  }
                  ans+=sum*v;
            }
            cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
