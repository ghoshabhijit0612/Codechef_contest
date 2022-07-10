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
    int a;
    cin>>a;
    if(a == 0)	{
    	cout<<"0"<<endl;
	}
	else if(a%3 == 0){
		cout<<"0"<<endl;
	}
	else{
		int x = a%3;
		int n = (a/3);
		int y = (n*3) +(x*3);
//		cout<<"y"<<y<<endl;
//		int  z= (y-x);
//		cout<<"z"<<z<<endl;
		cout<<(y-a)%3<<endl;
	}




	}




}



