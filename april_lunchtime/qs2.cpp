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

/********   All Required Header Files ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include<bits/stdc++.h>
using namespace std;
bool cheak_pali(string s){
	string P = s;
    reverse(P.begin(), P.end());
    if (s == P) {
        return true;
    }
    else {
        return false;
    }
}
void permu(string s,int l,int n,int ct,vector<string>&ans){
	
	if(n ==0){
		return;
	}	
	if(l == n){
		if(cheak_pali(s) && ct<=2){
			if(ct ==2)	return;
			ans.push_back(s);
//			if(ct<=2){
//				cout<<ans[ct++]<<endl;
//			}	
//			cout<<ans[ct++]<<endl;
			ct++;
		
			
		}
	}
	for(int i=l;i<=n;i++){
		swap(s[l],s[i]);
		permu(s,l+1,n,ct,ans);
		swap(s[l],s[i]); //backtrack
	}
	
}
int main(){
    int i_am_noob = 1;
	 cin >>i_am_noob;

	while(i_am_noob--)
	{
	//write your code
	int a,b;
	vector<string>ans;
	cin>>a>>b;
	if (a%2==1 && b%2==1){
		cout<<"-1"<<endl;
	}
	int n = (a+b);
	string s;
	for(int i=0;i<a;i++){
		s= s+'a';
	}
	for(int i=0;i<b;i++){
		s= s+'b';
	}
	int ct;
	permu(s,0,n-1,0,ans);
	for(int i=0;i<2;i++){
		cout<<ans[i]<<endl;
	}
	}




}


