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
int main(){
    int i_am_noob = 1;
	 cin >> i_am_noob;
	while(i_am_noob--)
	{
	//write your code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int x,y;
	cin>>x>>y;
			
		int z;
		if(x%2 == 0){
			z = (x^(x+1)^(x+2)^(x+3));
			if(z ==0 && (x+3)<=y){			
			cout<<x<<" "<<x+1<<" "<<x+2<<" "<<x+3<<" "<<endl;
			
		}
		}
		else if((x+1)%2 == 0){
			z = (x+1^(x+1+1)^(x+2+1)^(x+3+1));
			if(z == 0 && (x+3+1)<=y){			
			cout<<x+1<<" "<<x+2<<" "<<x+3<<" "<<x+4<<" "<<endl;
//			cout<<"==="<<endl;
		}
		
	else{
		cout<<"-1"<<endl;
	}
	

	}
	else{
			cout<<"-1"<<endl;
		}
}
}








