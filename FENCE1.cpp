/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
	while(1){
		cin>>n;
		if(n==0)
			break;
		double ans = (double)(((double)n*n)/(double)(2*PI));
		printf("%.2f\n",ans);
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
