//#include<bits/stdc++.h>
#include<iostream>  
 #include <vector>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
    cin >> n;
    vector< long long int>v(n);
    long long int  sum = 0;
    for(int i=0;i<n;i++)
	{
        cin >> v[i];
        sum += v[i];
    }
    long long int cnt = 1, ans = 0;
    while (sum > 0){
        sum -= cnt;
        ans += 1;
        cnt += 1;
    }
    if (sum < 0)
        cout << ans - 1 << endl;
    else
        cout << ans << endl;
	}
	return 0;
}
