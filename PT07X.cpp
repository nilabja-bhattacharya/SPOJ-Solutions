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

#define MAX 1000000

vector< vector<int> > grph;
int dp[MAX][2];

int f(int parent,int current, bool isparentcovered){
	if(dp[current][isparentcovered]!=-1)
		return dp[current][isparentcovered];
	int ret=0;
	if(isparentcovered){
		for(int i=0;i<grph[current].size();i++){
			if(grph[current][i]!=parent){
				ret+=f(current,grph[current][i],false);
			}
		}
		int r=1;
		for(int i=0;i<grph[current].size();i++){
			if(grph[current][i]!=parent)
				r+=f(current,grph[current][i],true);
		}
		dp[current][isparentcovered]=min(ret,r);
	}
	else{
		int r=1;
		for(int i=0;i<grph[current].size();i++)
			if(grph[current][i]!=parent)
				r+=f(current,grph[current][i],true);
		dp[current][isparentcovered]=r;
	}
	return dp[current][isparentcovered];
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
	cin>>n;
	grph.resize(n+1);
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		grph[u].push_back(v);
		grph[v].push_back(u);
	}
	int r1=1;
	for(int i=0;i<grph[1].size();i++)
		r1+=f(1,grph[1][i],true);
	int r2=0;
	for(int i=0;i<grph[1].size();i++)
		r2+=f(1,grph[1][i],false);
	cout<<min(r1,r2)<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
