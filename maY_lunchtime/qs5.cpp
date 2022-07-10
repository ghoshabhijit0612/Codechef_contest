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
using namespace std;
#define vi std::vector<int> 
#define vvi std::vector<vi> 
#define pii pair<int,int>
#define vii std::vector<pii>
#define rep(i,a,b) for (int i = a; i < b; i++) 
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
#define yes cout<<"YES\n";
#define ll long long
#define no cout<<"NO\n";
#define pb push_back
#define ml '\n'
int main(){
    int i_am_noob = 1;
	 cin >> i_am_noob;
	while(i_am_noob--)
	{
 ll ne,ms; cin>>ne>>ms;
  vector<ll> a(ne);

  rep(i,0,ne)
      cin>>a[i];

    sort(a.begin(), a.end());
    ll big = a[ne-1];
    ll sbig = 0;
    if(a[ne-1] != a[ne-2]){
	
      sbig = a[ne-2];
  }
    else
    {
	
      sbig = a[ne-3];
  }
    ll ani = ((sbig%ms)-(big%ms)+ms)%ms;
    ll ans1 = big + sbig + ani;
    
    
    
    int big1 = a[ne-1];
    int sbig1 = a[ne-1];
    ll ani1 = ((sbig1%ms)-(big1%ms)+ms)%ms;
    ll ans2 = big1 + sbig1 + ani1;
    
    
    
    
    
    int big2 = a[ne-2];
    int sbig2 = a[ne-2];
    ll ani2 = ((sbig2%ms)-(big2%ms)+ms)%ms;
    ll ans3 = big2 + sbig2 + ani2;
    
    
    
    
    
    int big3 = a[ne-1];
    int sbig3 = 0;
    if(a[ne-1] != a[ne-2]){
    	sbig3 = a[ne-2];
	}
      
    else
      {
      	sbig3 = a[ne-3];
	  }
    swap(big3,sbig3);
    ll hi3 = ((sbig3%ms)-(big3%ms)+ms)%ms;
    ll ans4 = big3 + sbig3 + hi3;

    ll abhi = max(ans1,ans2);
    ll jit = max(ans3, ans4);
    cout<<max(abhi,jit)<<ml;
	




	}




}



