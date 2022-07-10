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
    int n,m1,k1;
    cin>>n>>m1>>k1;
    vector<int>arr(n);
  
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    	
	}
if(m1 < k1){
	cout<<"NO"<<endl;
}
else{
sort(arr.begin(),arr.end());
int abhi=0;
int ct =0;
for(int i=0;i<n;i++){
	if(ct == m1){
		break;
	}
	if(k1 == arr[i]){
	continue;
	}
	if(abhi == arr[i]){
		abhi++;
	}
	ct++;
}
if(ct == m1 && abhi == k1){
	cout<<"YES"<<endl;
}
else{
	cout<<"NO"<<endl;
}
}
	}

}



