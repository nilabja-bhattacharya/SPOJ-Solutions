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
	int n;
	while(1){
		cin>>n;
		if(n==0)
			break;
		queue<int>   q;
		stack<int> st1;
		stack<int> st2;
		bool fl=0;
		for(int i=0;i<n;i++){
                        int v;
                        cin>>v;
                        q.push(v);
            }
            while(!q.empty() || !st1.empty()){
                  if(st1.empty() && !q.empty()){
                        int r1=q.front();
                        q.pop();
                        if(r1>q.front()){
                              st1.push(r1);
                        }
                        else{
                              if(st2.empty())
                                    st2.push(r1);
                              else if(st2.top()<r1)
                                    st2.push(r1);
                              else{
                                    cout<<"no"<<endl;
                                    fl=1;
                                    break;
                              }
                        }
                  }
                  else if(!st1.empty() && q.empty()){
                        int r1=st1.top();
                        if(r1>st2.top()){
                              st2.push(r1);
                              st1.pop();
                        }
                        else{
                              cout<<"no"<<endl;
                              fl=1;
                              break;
                        }
                  }
                  else{
                        if(st1.top()>q.front()){
                              int r1=q.front();
                              q.pop();
                              if(r1>q.front()){
                                    st1.push(r1);
                              }
                              else{
                                    if(st2.empty())
                                          st2.push(r1);
                                    else if(st2.top()<r1)
                                          st2.push(r1);
                                    else{
                                          cout<<"no"<<endl;
                                          fl=1;
                                          break;
                                    }
                              }
                        }
                        else{
                              int r1=st1.top();
                              st1.pop();
                              if(st1.empty())
                                    st2.push(r1);
                              else if(st2.top()<r1)
                                    st2.push(r1);
                              else{
                                    cout<<"no"<<endl;
                                    fl=1;
                                    break;
                              }
                        }
                  }
            }
            if(!fl)
                  cout<<"yes"<<endl;

	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
