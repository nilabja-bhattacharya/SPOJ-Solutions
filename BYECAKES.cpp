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
	int E,F,S,M,E1,F1,S1,M1;
	while(1){
		cin>>E>>F>>S>>M>>E1>>F1>>S1>>M1;
		if(E==-1  && F==-1 && S==-1 && E1==-1 && F1==-1 && S1==-1 && M==-1 && M1==-1)
			break;
		int re,rf,rs,rm;
		re=E/E1;
		if(E%E1)
			re+=1;
		rf=F/F1;
		if(F%F1)
			rf+=1;
		rs=S/S1;
		if(S%S1)
			rs+=1;
		rm=M/M1;
		if(M%M1)
			rm+=1;
		int mx=max(max(re,rf),max(rs,rm));
	/*	if(mx>0)*/
			cout<<mx*E1-E<<" "<<mx*F1-F<<" "<<mx*S1-S<<" "<<mx*M1-M<<endl;
		/*else
			cout<<E1-E<<" "<<F1-F<<" "<<S1-S<<" "<<M1-M<<endl;*/
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
