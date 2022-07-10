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
   int a,b;
   cin>>a>>b;
   vector<int>v;
   if(a&1 && b&1){
   int  x = 2;
   int y = 2^a;
   int z = b^2;
   v.push_back(x);
   v.push_back(y);
   v.push_back(z);

   
   }else{
    int  x = 3;
   int y = 3^a;
   int z = 3^b;
     v.push_back(x);
   v.push_back(y);
   v.push_back(z);
   }
   sort(v.begin(),v.end());
   for(int i=0;i<3;i++){
    cout<<v[i]<<' ';
   }
   cout<<"\n";




	}




}


