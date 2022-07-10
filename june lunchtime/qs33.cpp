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
	int n;
	cin>>n;
	if(n%2 == 0){
		string heLo;
		for(int i=1;i<=n/2;i++){
			if(i%2 == 1){
			heLo += '1';	
			}
			else{
				heLo +='0';
			}
			
		}
		string bi;
		bi += heLo;
		reverse(heLo.begin(),heLo.end());
		bi += heLo;
		cout<<bi<<endl;
	}
	else{
		string s;
		for(int i=1;i<=n;i++){
			if(i&1 ==1){
				s += '0';
			}
			else{
				s += '1';
			}
		}
		cout<<s<<endl;
	}



	}




}



