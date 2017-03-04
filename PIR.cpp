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
	int t;
	cin>>t;
	while(t--){
		double ab,ac,ad,bc,bd,cd;
		cin>>ab>>ac>>ad>>bc>>bd>>cd;
		double u1=(double)(bd*bd) + (double)(cd*cd) - (double)(bc*bc);
		double v1=(double)(ad*ad) + (double)(cd*cd) - (double)(ac*ac);
		double w1=(double)(ad*ad) + (double)(bd*bd) - (double)(ab*ab);
		double ans=(sqrt(4*(double)(ad*ad)*(double)(bd*bd)*(double)(cd*cd)-(double)(ad*ad)*(double)(u1*u1)-(double)(bd*bd)*(double)(v1*v1) - (double)(cd*cd)*(double)(w1*w1)+(double)(u1*v1*w1)));
		ans=ans/(double)12;
		printf("%.4f\n",ans);
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
