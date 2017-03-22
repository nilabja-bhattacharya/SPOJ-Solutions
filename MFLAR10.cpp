/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

//Split String by Single Character Delimiter
vector<string> split(const string& s, char delim)
{
   vector<string> elems;
   stringstream ss(s);
   string item;
   while (getline(ss, item, delim))
       elems.push_back(item);
   return elems;
}
char tolower(char ch){
    if(ch>='a')
        return ch-'a';
    else
        return ch-'A';
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	while(1){
		string str;
		getline(cin,str);
	//	cout<<str<<endl;
		bool fl=0;
		if(str=="*")
			break;
		vector<string> v=split(str,' ');
		for(int i=1;i<v.size();i++){
			if(tolower(v[i][0])==tolower(v[0][0]))
				continue;
			else{
				fl=1;
				cout<<'N'<<endl;
				break;
			}
		}
		if(!fl)
			cout<<'Y'<<endl;
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
