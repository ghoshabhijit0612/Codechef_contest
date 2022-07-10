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
//	ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
int n,ct=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
for(int i=0;i<n-1;i++){
	if((arr[i] - arr[i+1]) ==1 || (arr[i] - arr[i+1]) ==-1  || ( 	arr[i] - arr[i+1]) ==0 ){
		ct++;
	}
}
//cout<<ct<<endl;
if(ct == n-1){
	cout<<"YES"<<endl;
}

else{
	cout<<"NO"<<endl;
}



	}




}



