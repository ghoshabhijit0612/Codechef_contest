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
	int a1,b1;
	int a2,b2;
	cin>>a1>>b1>>a2>>b2;
//	int x = abs(a1-a2);
	int z = abs((a1+a2)-(b1+b2));
	int se;
	if(a1==a2 || (a1>a2) || (a2>a1)){
		se = b2%2;
		if(se == 0){
			cout<<"NO"<<endl;
		}else{
		cout<<"NO"<<endl;
	}
		
	}
	
	
	
}
}







