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
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int k;
	cin>>k;
	deque<int> q;
	for(int i=0;i<k;i++){
		q.push_back(v[i]);
	}
	cout<<*max_element(q.begin(),q.end())<<" ";
	for(int i=k;i<n;i++){
		q.pop_front();
		q.push_back(v[i]);
		cout<<*max_element(q.begin(),q.end())<<" ";
	}

	//cout<<"Execution time : "<<tick();
      return 0;
}
