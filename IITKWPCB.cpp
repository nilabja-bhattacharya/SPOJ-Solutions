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

typedef long long ll;
inline ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll m=n/2;
			for(ll i=m;i>=1;i--){
				if(gcd(i,n)==1){
					cout<<i<<endl;
					break;
				}
			}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
