/*
*LINK:
*nilabja16180
*/
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <fstream>
#include <limits>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000000
int dp[MAX];
int f(int n){
	if(n==0)
		return 1;
	if(n==1)
		return 0;
	if(n==2)
		return 3;
	if(n==3)
		return 0;
	if(dp[n]!=-1)
		return dp[n];
	return dp[n]=4*f(n-2) - f(n-4);
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	while(1){
		int n;
		cin>>n;
		if(n==-1)
			break;
		memset(dp,-1,sizeof(dp));
		cout<<f(n)<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
