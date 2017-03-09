/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
struct TrieNode{
      struct TrieNode *chld[10];
      bool isleaf;
};

struct TrieNode *getNode(){
      struct TrieNode *pNode = (struct TrieNode *)malloc(sizeof(struct TrieNode));

      if(pNode){
            pNode->isleaf = false;
            for(int i=0;i<10;i++)
                  pNode->chld[i]=NULL;
            return pNode;
      }
}

void insert(struct TrieNode *root,string str){
      int level=0;
      int index;
      int len=str.size();
      struct TrieNode *pCrawl = root;
      for(level=0;level<len;level++){
            index=str[level]-'0';
            if(!pCrawl->chld[index])
                  pCrawl->chld[index]=getNode();
            pCrawl=pCrawl->chld[index];
      }
      pCrawl->isleaf=true;
}
bool search(struct TrieNode *root,string str){
    int i=0;
    int index;
    int len=str.size();
    struct TrieNode *pCrawl=root;
    for(int i=0;i<len-1;i++){
        index=(int)(str[i]-'0');
        if(pCrawl->chld[index]->isleaf)
            return false;
        pCrawl = pCrawl->chld[index];
    }
    return true;
}
string arr[10010];
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin>>t;
      while(t--){
            int n;
            cin>>n;
            bool fl=0;
           // memset(arr,0,sizeof(arr));
            struct TrieNode *root =getNode();
            for(int i=0;i<n;i++){
                  cin>>arr[i];
                 // cout<<"a"<<endl;
                  insert(root,arr[i]);
            }
            for(int i=0;i<n;i++){
               // cout<<"a"<<endl;
                if(!search(root,arr[i])){
                    fl=1;
                    break;
                }
            }
            if(!fl)
                  cout<<"YES"<<endl;
            else
                  cout<<"NO"<<endl;
      }
	//cout<<"Execution time : "<<tick();
      return 0;
}
