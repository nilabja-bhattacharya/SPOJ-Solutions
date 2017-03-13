#include <bits/stdc++.h>
using namespace std;
inline int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
int pour(int a,int b,int c){
      int k=1;
      int k1=a;
      int k2=0;
      while(k1!=c || k2!=c){
            int trnsfr=min(k1,b-k2);
            k1-=trnsfr;
            k2+=trnsfr;
            k++;
            if(k1==c || k2==c)
                  break;
            if(k1==0){
                  k1=a;
                  k++;
            }
            if(k2==b){
                  k2=0;
                  k++;
            }
      }
      return k;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int gc=gcd(a,b);
		if(c>max(a,b) || c%gc)
			cout<<-1<<endl;
		else if(a==c || b==c)
                  cout<<1<<endl;
            else{
                  cout<<min(pour(a,b,c),pour(b,a,c))<<endl;
            }
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
