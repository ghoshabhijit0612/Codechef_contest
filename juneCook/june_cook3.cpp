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
int main(){
    int i_am_noob = 1;
	 cin >> i_am_noob;
	while(i_am_noob--)
	{
	//write your code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	vector<int>v;
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	int ans;
	 ans= v[0]+v[n-1];
	for(int k=0;k<n-1;k++)
		ans  = max(ans,(v[k]+v[k+1]));

	cout<<ans<<endl;
	}
	




}



