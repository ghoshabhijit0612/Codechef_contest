#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int MOD = 1000000000+7;

int countSetBit(int n){
  if(n == 0){
    return 0;
  }
  int a = n & 1;
  if(a == 1){
    return 1 + countSetBit(n >> 1);
  }
  return countSetBit(n >> 1);
}

int maxSetBit(int n, int k, int **dp){
  if(n == 0){
    return countSetBit(k);
  }
  if(dp[n][k] != -1){
    return dp[n][k];
  }
  int a = ((ll) countSetBit(n) + maxSetBit(n-1, k-n, dp)) % MOD;
  int b = maxSetBit(n-1, k, dp);
  dp[n][k] = max(a,b);
  return dp[n][k];
}

int solve(int n, int k){
  int *dp = new int[n+1];
  for(int i = 0; i <= n; i++){
    dp[i]=  new int[k+1];
    for(int j = 0; j <= k; j++){
      dp[i][j] = -1;
    }
  }
  int ans = maxSetBit(n, k, dp);
  
  
  return ans;
}

int32_t main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  while(t--){
    int n, k, count = 0;
    cin >> n >> k;
    cout << solve(n, k) << endl;
  }
  return 0;
}
