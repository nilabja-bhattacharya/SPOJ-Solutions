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
#define MAX 1000010

int m,k,l;
bool dp[MAX];
void f(){
    dp[0]=false;
    for(int i=1;i<MAX;i++){
	    dp[i]=false;
	    if(i-1>=0 && !dp[i-1]) dp[i]=true;
	    if(i-k>=0 && !dp[i-k]) dp[i]=true;
	    if(i-l>=0 && !dp[i-l]) dp[i]=true;
    }
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	cin>>k>>l>>m;
	string str;
	int a;
	f();
	for(int i=0;i<m;i++){
		cin>>a;
		if(dp[a])
			str+='A';
		else
			str+='B';
	}
	cout<<str<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}



/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
/* Recursive version
#include <bits/stdc++.h>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000010

int m,k,l;
int dp[MAX];
bool f(int a){
    if(a<=0)
        return 0;
	if(dp[a]!=-1)
		return dp[a];
	else{
	        int arr[]={a-l,a-k,a-1};
	        for(int i=0;i<3;i++)
	            if(!f(arr[i]) && arr[i]>=0)
	                return dp[a]=1;
			return dp[a]=0;
	}
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	cin>>k>>l>>m;
	string str;
	int a;
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<m;i++){
		cin>>a;
		if(f(a))
			str+='A';
		else
			str+='B';
	}
	cout<<str<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}*/
