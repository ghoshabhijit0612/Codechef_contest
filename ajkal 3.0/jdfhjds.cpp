#include<iostream>
#include <cstdlib>
#include<queue>
using namespace std;
typedef long long ll;

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    ll n;
    scanf("%lld", &n);
    queue<ll> q;
    for(ll i = 0; i < n; i++){
      ll a;
      scanf("%lld", &a);
      q.push(a);
    }
    ll ans1 = 0, ans2 = 0;
    ll count = 1;
    while(!q.empty()){
      ll front = q.front();
      q.pop();
      if(front > 1){
        q.push(front/2);
      }
      if(count % 2 == 1){
        ans1 += front;
      }else{
        ans2 += front;
      }
      count++;
    }
   int x = ans1-ans2;
   int val = abs(x);
	cout<<val<<endl;
  }
  return 0;
}
