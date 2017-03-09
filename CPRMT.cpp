/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
string str1,str2;
int arr1[26];
int arr2[26];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      while(cin>>str1>>str2){
            memset(arr1,0,sizeof(arr1));
            memset(arr2,0,sizeof(arr2));
            for(int i=0;i<str1.size();i++)
                  arr1[str1[i]-'a']++;
            for(int i=0;i<str2.size();i++)
                  arr2[str2[i]-'a']++;
            string ans;
            for(int i=0;i<26;i++){
                  for(int j=0;j<min(arr1[i],arr2[i]);j++)
                        ans+='a'+i;
            }
            cout<<ans<<endl;
      }
	//cout<<"Execution time : "<<tick();
      return 0;
}
