/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 100000010
bool prime[MAX];
bool visited[10000];
int d[10000];
void sieve(){
	prime[0]=1;
	prime[1]=1;
	for(int i=2;i*i<=MAX;i++){
		if(!prime[i]){
			for(int j=i*i;j*j<=MAX;j+=i)
				prime[j]=1;
		}
	}
}

int bfs(int a,int b){
	queue<int> q;
	memset(visited,false,sizeof(visited));
	memset(d,-1,sizeof(d));
	visited[a]=true;
	q.push(a);
	string num;
	d[a]=0;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		num=to_string(u);
		for(int i=0;i<4;i++){
			for(int j=0;j<10;j++){
				if(i==0 && j==0)
					continue;
				else{
					num[i]=j+'0';
					int temp=stoi(num);
					if(!visited[temp] && !prime[temp] && temp!=u){
						q.push(temp);
						visited[temp]=true;
						d[temp]=d[u]+1;
						if(temp==b)
							return d[b];
					}
				}
			}
			num=to_string(u);
		}
	}
	return d[b];
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	int t;
	cin>>t;
	sieve();
	while(t--){
		int a,b;
		cin>>a>>b;
		int x=bfs(a,b);
		if(a==b)
			cout<<0<<endl;
		else{
			if(x==-1)
				cout<<"Impossible"<<endl;
			else
				cout<<x<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
      return 0;
}
