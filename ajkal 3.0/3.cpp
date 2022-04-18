#include<iostream>
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
    ll fP = 0, sP = 0;
    ll count = 1;
    while(!q.empty()){
      ll front = q.front();
      q.pop();
      if(front > 1){
        q.push(front/2);
      }
      if(count % 2 == 1){
        fP += front;
      }else{
        sP += front;
      }
      count++;
    }
    ll dif = (fP - sP);
    if(dif < 0){
      printf("%d\n", -dif);
    }else{
      printf("%d\n", dif);
    }
  }
  return 0;
}
