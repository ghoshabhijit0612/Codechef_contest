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
using namespace std;
int main(){
    int i_am_noob = 1;
	 cin >> i_am_noob;
	while(i_am_noob--)
	{
	//write your code
	int w1,x,y,z;
	cin>>w1>>x>>y>>z;
	long long int f = (x-w1);
	int z1 = y*z;
	if(f < z1 ){
		cout<<"overFlow"<<endl;
	}
	else if( f==z1){
		cout<<"filled"<<endl;
	}
	else{
		cout<<"unfilled"<<endl;
	}




	}




}



