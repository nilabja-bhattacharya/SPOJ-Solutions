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
	string str;
	while(cin>>str){
		string str1;
		int k=0;
		bool fl=0;
		for(int i=0;i<str.size();i++){
		    if(i==0){
		        if(str[i]>='a' && str[i]<='z')
		            str1+=str[i];
		    else{
		           fl=1;
					break;
		    }
		    }
			else if(str[i]=='_'){
				if(k==1 || k==0){
					if(k==0)
						k=1;
					if(str[i+1]>='a' && str[i+1]<='z'){
					    str1+=toupper(str[i+1]);
					    i++;
					    continue;
					}
					else{
					    fl=1;
					break;
					}
				}
				else{
					 fl=1;
					break;
				}
			}
			else	if(str[i]>='A' && str[i]<='Z'){
					if(k==2 || k==0){
						if(k==0)
							k=2;
						str1+='_';
						str1+=tolower(str[i]);
						continue;
					}
					else{
						fl=1;
						break;
					}

				}
				else{
					str1+=str[i];
				}

		}
		if(!fl)
			cout<<str1<<endl;
		else
			cout<<"Error!"<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
