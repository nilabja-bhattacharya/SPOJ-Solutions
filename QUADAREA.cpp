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
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		double s=(a+b+c+d)/2;
		double area=(double)sqrt((double)((double)(s-a)*(double)(s-b)*(double)(s-c)*(double)(s-d)));
		printf("%.2f\n",area);
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
