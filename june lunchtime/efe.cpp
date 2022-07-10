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
	int x,y,z;
	cin>>x>>y>>z;
	int z1 = x^y;
	if(x ==y){
		cout<<0<<endl;
	}
//	int z1 = x^y;
	else if( z1<z){
		cout<<1<<endl;
	}
	else if(log2(z1) == log2(z)){
		if(z&(z-1)){
			cout<<2<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	else{
		cout<<-1<<endl;
	}



	}




}



