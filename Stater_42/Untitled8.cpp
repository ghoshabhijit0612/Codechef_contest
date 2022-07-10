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
	while(i_am_noob--)
	{
	//write your code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,b,ct=0;
	int ans=0;
	cin>>n>>b;
	if(n==1){
		cout<<__builtin_popcount(b)<<endl;
		}
	else{	
		while(b>0){
			ct += __builtin_popcount(b);
//			cout<<"count is"<<ct<<endl;
			b = b>>1;
			ans++;
		}
			cout<<ct-1<<endl;	
		}
	
	



	}




}



