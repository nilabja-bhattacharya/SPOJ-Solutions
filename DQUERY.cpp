/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
#define N 311111
#define BLOCK 555
#define A 1000011

int c[A],a[N],ans=0,answer[N];
struct node{
	int L,R,i;
}q[N];

bool cmp(node x,node y){
	if(x.L/BLOCK!=y.L/BLOCK)
		return x.L<y.L;
	return x.R<y.R;
}

void add(int pos){
	c[a[pos]]++;
	if(c[a[pos]]==1)
		ans++;
}

void remove(int pos){
	c[a[pos]]--;
	if(c[a[pos]]==0)
		ans--;
}

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
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int n;
	read(n);
	for(int i=0;i<n;i++)
		read(a[i]);
	int m;
	read(m);
	for(int i=0;i<m;i++){
		read(q[i].L);
		read(q[i].R);
		q[i].L--;
		q[i].R--;
		q[i].i=i;
	}
	sort(q,q+m,cmp);
	int curL=0,curR=0;
	for(int i=0;i<m;i++){
		int L=q[i].L,R=q[i].R;
		while(curL<L){
			remove(curL);
			curL++;
		}
		while(curL>L){
			add(curL-1);
			curL--;
		}
		while(curR<=R){
			add(curR);
			curR++;
		}
		while(curR>R+1){
			remove(curR-1);
			curR--;
		}
		answer[q[i].i] =ans;
	}
	for(int i=0;i<m;i++)
		printf("%d\n",answer[i]);
	//cout<<"Execution time : "<<tick();
      return 0;
}
