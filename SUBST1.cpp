/*
*LINK:
*nilabja16180
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX_N 100010
#define clr(x) (memset((x),0,sizeof((x))))
char T[MAX_N];
int n;
int RA[MAX_N],tempRA[MAX_N];
int SA[MAX_N],tempSA[MAX_N];
int c[MAX_N];
int LCP[MAX_N];
int PLCP[MAX_N];
int phi[MAX_N];
void countingSort(int k){
	int i,sum,maxi=max(300,n);
	memset(c,0,sizeof(c));
	for(i=0;i<n;i++)
		c[i+k<n?RA[i+k]:0]++;
	for(i=sum=0;i<maxi;i++){
		int t=c[i];
		c[i]=sum;
		sum+=t;
	}
	for(i=0;i<n;i++)
		tempSA[c[SA[i]+k<n?RA[SA[i]+k]:0]++]=SA[i];
	for(int i=0;i<n;i++)
		SA[i]=tempSA[i];
}

void constructSA(){
	int i,k,r;
	for(i=0;i<n;i++) RA[i]=T[i];
	for(i=0;i<n;i++) SA[i]=i;
	for(k=1;k<n;k<<=1){
		countingSort(k);
		countingSort(0);
		tempRA[SA[0]]=r=0;
		for(i=1;i<n;i++)
			tempRA[SA[i]]=(RA[SA[i]]==RA[SA[i-1]] && RA[SA[i]+k]==RA[SA[i-1]+k])?r:++r;
		for(i=0;i<n;i++)
			RA[i]=tempRA[i];
		if(RA[SA[n-1]]==n-1) break;
	}
}

void computeLCP(){
	int i,L;
	phi[SA[0]]=-1;
	for(i=1;i<n;i++)
		phi[SA[i]]=SA[i-1];
	for(i=L=0;i<n;i++){
		if(phi[i]==-1){
			PLCP[i]=0;
			continue;
		}
		while(T[i+L]==T[phi[i]+L]) L++;
		PLCP[i]=L;
		L=max(L-1,0);
	}
	for(i=0;i<n;i++)
		LCP[i]=PLCP[SA[i]];
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		clr(SA);
		clr(RA);
		clr(c);
		clr(tempRA);
		clr(tempSA);
		clr(T);
		clr(LCP);
		clr(PLCP);
		clr(phi);
		cin>>T;
		n=(int)strlen((T));
		T[n++]='$';
		constructSA();
		computeLCP();
		int ans=0;
		for(int i=0;i<n;i++)
			ans+=SA[i]-LCP[i];
		cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
