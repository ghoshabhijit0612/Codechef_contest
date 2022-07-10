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
	int a;
	cin>>a;
	if(a == 2){
	cout<<0<<endl;
}

	else if(a%2 != 0){
		cout<<((a/2)*(a/2)+1)-1<<endl;
	}
	else{
		if((a/2)%2 ==0){
			cout<<(((a/2)-1)*(a/2+1)-1)<<endl;
		}
		else	cout<<(((a/2)-2)*(a/2+2)-1)<<endl;
	}
	}

}

	








