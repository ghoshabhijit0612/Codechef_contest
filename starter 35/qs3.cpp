#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll           vector<long long int>
int main(){
    ll test;
    cin>>test;
    while(test--){
    ll n1, x, k = INT_MAX, m;
    cin >> n1 >> x;
    vll a;
    for(ll i=0;i<n1;i++) 
    {
    ll h;
    cin>>h;
    a.push_back(h);
   } 
    for(auto c: a) k = min(k, c);
    m = x / k;
    if(x % k) ++m;
    cout << max(n1, m);
    cout << endl;

    }
  return 0;
}
