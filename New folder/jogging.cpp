	/*
	* Note: This template uses some c++11 functions , so you have to compile it with c++11 flag.
	*       Example:-   $ g++ -std=c++11 c++Template.cpp
	*
	* Author : Abhijit Ghosh
	* Handle: confusedboy
	**
	***
	****
	*****
	******
	*******
	********
	*********
	*******
	*****
	***
	**
	*
	*/
	
	/********   HAR HAR MOHADEV ***JAI SRI KRISNA ********/
	#include<bits/stdc++.h>
	typedef long long ll;
	#define endl "\n";
	using namespace std;
	//int gcd(int a,int b){
	//	if(b ==0)	return a;
	//	return gcd(b,a%b);
	//}
	//int lcm(int a,int b){
	//	return((a*b)/gcd(a,b));
	//}
	int main(){
	    int i_am_noob = 1;
		 cin >> i_am_noob;
		vector<int>v;
		v.push_back(1);
		ll mod = 1000000007;
		for(int i=0;i<1000010;i++){
			ll abhi = v[v.size()-1]*2;
			abhi%=mod;
			v.push_back(abhi);
		} 
		while(i_am_noob--)
		{
		//write your code
		ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    
	    ll x,y;
	    cin>>x>>y;
	    long long int ans;
	    ans = (v[x-1]*y)%mod;
	    cout<<ans<<endl;
		}
	
	
	
	
	}
	
	

