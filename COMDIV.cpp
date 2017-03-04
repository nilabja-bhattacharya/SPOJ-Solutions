/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

inline void read (int &x) {
    register char c = getchar();
    x = 0;
    bool neg = 0;
    for(;((c < '0' || c > '9') && c != '-'); c = getchar());
    if (c == '-') {
        neg = 1;
        c = getchar();
    }
    for(;c >= '0' && c <= '9'; c=getchar())
        x = (x << 1) + (x << 3) + (c - '0');
    if(neg)
        x = -x;
}
inline int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	read(t);
	while(t--){
		int n,m;
		read(n);
		read(m);
		int gc=gcd(n,m);
		int ans=0;
		for(int i=1;i*i<=gc;i++){
			if(gc%i==0){
				if(gc/i==i)
					ans++;
				else
					ans+=2;
			}
		}
		printf("%d\n",ans);
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
