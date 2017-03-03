/*
*DIV 2 C.
*LINK:
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000010

typedef long long ll;
vector<int> primes;
bool prime[MAX];
void sieve(){
      prime[0]=1;
      prime[1]=1;
      for(int i=0;i<MAX;i++){
            if(!prime[i]){
                  primes.push_back(i);
                  for(int j=i*i;j<MAX;j+=i)
                        prime[i]=1;
            }
      }
}
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin>>t;
      sieve();
      while(t--){
            ll n;
            cin>>n;
            if(n==0)
                  cout<<"Yes"<<endl;
            else{
                  bool fl=0;
                  for(int i=0;i<primes.size();i++){
                        int cnt=0;
                        while(n%primes[i]==0){
                              if(primes[i]%4==3)
                                    cnt++;
                              n/=primes[i];
                        }
                        if(cnt%2!=0){
                              cout<<"No"<<endl;
                              fl=1;
                              break;
                        }
                  }
                  if(!fl && n%4!=3) cout<<"Yes"<<endl;
                  else if(!fl) cout<<"No"<<endl;
            }
      }
	//cout<<"Execution time : "<<tick();
      return 0;
}
