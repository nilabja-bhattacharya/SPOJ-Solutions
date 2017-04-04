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
#define MAX 100010


int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		vector< pair<string,int> > v;
		for(int i=0;i<str.size();i++){
			string str1=str.substr(i)+str.substr(0,i);
			v.push_back({str1,i+1});
		}
		sort(v.begin(),v.end());
		cout<<v[0].second<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
