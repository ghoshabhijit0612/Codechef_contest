#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define all(const) const.begin(), const.end()
int main(){
	int t;
	cin>>t;
	while(t--){
//	string a="abcdefghijklmnopqrstuvwxyz";
 		int x;
        cin >> x;
        vector<int> v(x);
        for(int i = 0; i < x; i++)
            cin >> v[i];
        sort(v.rbegin(),v.rend());
        int p = *v.begin();
    
        int res = accumulate(all(v),0LL);
        double getans = double(res-p)/(x-1);
        getans+=p;
        cout << setprecision(12) << fixed<<getans<<endl;
       
}
}

