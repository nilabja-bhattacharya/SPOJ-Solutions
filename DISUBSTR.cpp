/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX_N 100010
int RA[MAX_N],tempRA[MAX_N];
int SA[MAX_N],tempSA[MAX_N];
char T[MAX_N];
int n;
int c[MAX_N];
int phi[MAX_N];
int LCP[MAX_N];
int PLCP[MAX_N];
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
      for(i=0;i<n;i++)
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
                  tempRA[SA[i]] = (RA[SA[i]]==RA[SA[i-1]] && RA[SA[i]+k]==RA[SA[i-1]+k])?r:++r;
            for(i=0;i<n;i++)
                  RA[i]=tempRA[i];
            if(RA[SA[n-1]]==n-1)    break;
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
            while(T[i+L] == T[phi[i] + L])    L++;
            PLCP[i]=L;
            L=max(L-1,0);
      }
      for(int i=0;i<n;i++)
            LCP[i]=PLCP[SA[i]];
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
            memset(T,0,sizeof(T));
            memset(SA,0,sizeof(SA));
            memset(RA,0,sizeof(RA));
            memset(tempSA,0,sizeof(tempSA));
            memset(tempRA,0,sizeof(tempRA));
            memset(c,0,sizeof(c));
            memset(phi,0,sizeof(phi));
            memset(PLCP,0,sizeof(PLCP));
            memset(LCP,0,sizeof(LCP));
		    cin>>T;
		    n=strlen(T);
            T[n++]='$';
            constructSA();
            computeLCP();
            int ans=0;
            for(int i=0;i<n;i++){
                  //cout<<SA[i]<<" "<<LCP[i]<<endl;
                  ans+=((SA[i])-LCP[i]);
            }
            cout<<ans<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
