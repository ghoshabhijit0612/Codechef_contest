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
    int p1=0,q1=0;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    	if(arr[i] == 1){
    		p1++;
		}
		else{
			q1++;
		}
	}
	p1 = abs(p1 -q1);
	if(p1 % 2){
		cout<<-1<<endl;
	}
	else{
		cout<<p1/2<<endl;
	}
	




	}




}



