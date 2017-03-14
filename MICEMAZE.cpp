#include <bits/stdc++.h>
using namespace std;
#define INF (int)1e9
typedef pair<int,int> pii;
typedef vector<pii> vpii;
int n,e,t;
vector< vector< pair<int,int> > > grph;
vector<int> dist;
void dijsktra(int s){
	dist[s]=0;
	priority_queue< pii,vpii,greater<pii> > pq;
	pq.push({0,s});
	while(!pq.empty()){
		pii node=pq.top();
		pq.pop();
		int w=node.first;
		int u=node.second;
	//	cout<<w<<" "<<u<<endl;
		if(w>dist[u])	continue;
		for(int i=0;i<grph[u].size();i++){
			pii v=grph[u][i];
			if(dist[u]+v.second<dist[v.first]){
				dist[v.first]=dist[u]+v.second;
				pq.push({dist[v.first],v.first});
			}

		}
	}
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cin>>n>>e>>t;
      int m;
      cin>>m;
      grph.resize(n+1);
      dist.assign(n+1,INF);
      for(int i=0;i<m;i++){
            int u,v,w;
            cin>>u>>v>>w;
            grph[v].push_back({u,w});
      }
     /* for(int i=1;i<=n;i++){
          for(int j=0;j<grph[i].size();j++)
               cout<<i<<" "<<grph[i][j].first<<" "<<grph[i][j].second<<endl;
      }*/
      dijsktra(e);
      int ans=0;
      for(int i=1;i<=n;i++){
          if(dist[i]<=t)
            ans++;
      //  cout<<dist[i]<<" ";
      }
      cout<<ans<<endl;
	//cout<<"Execution time : "<<tick();
      return 0;
}
