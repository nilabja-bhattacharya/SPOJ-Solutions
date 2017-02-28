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
	int n;
	cin>>n;
	int ans=1;
	int arr[]={0,0,0};
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		if(str=="1/2"){
			arr[0]++;
		}
		else	if(str=="3/4"){
			arr[1]++;
		}
		else if(str=="1/4"){
			arr[2]++;
		}
		//cout<<ans<<endl;
	}

	ans= ans+ (arr[0]/2 + arr[0]%2);
	if(arr[0]%2)
		arr[2]=arr[2]==1?0:arr[2]-2;
	if(arr[1]>=arr[2])
		ans+=arr[1];
	else{
		ans+=arr[1]+((arr[2]-arr[1])/4);
		if((arr[2]-arr[1])%4)
			ans++;
	}
	cout<<ans<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
