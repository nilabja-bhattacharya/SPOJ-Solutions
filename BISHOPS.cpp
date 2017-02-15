/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
void solve(string str){
	int n = str.length();
	string str1;
	int carry=0;
	for(int i=n-1;i>=0;i--){
		int a=(str[i]-'0')*2+carry;
		str1+=(char)(a%10+'0');
		carry=a/10;
		//cout<<carry<<" "<<a<<endl;
	}
	if(carry>0)
		str1+=(char)(carry+'0');
	//cout<<str1<<endl;
	carry=2;
	for(int i=0;i<str1.size();i++){
		int a=str1[i] - '0';
		if(a>1){
			str1[i]=(str1[i]- '0' - carry + 10)%10 + '0';
			break;
		//	cout<<str1[i]<<endl;
		}
		else{
			str1[i]=(str1[i]- '0' - carry + 10)%10 + '0';
			carry=1;
		}
	}
	reverse(str1.begin(),str1.end());
	bool fl=0;
	for(int i=0;i<str1.size();i++){
		if(str1[i]=='0' && fl==0)
			continue;
		cout<<str1[i];
		fl=1;
	}
	cout<<endl;
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	string str;
	while(cin>>str){
	if(str=="1" || str=="0")
		cout<<str<<endl;
	else
		solve(str);
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}

/*'

#nIn python
 while(1):
  try:
    x=int(input())
    if (x==0 or x==1):
    	print (x)
    else:
    	print (int((2*x)-2))
  except:
    break */
