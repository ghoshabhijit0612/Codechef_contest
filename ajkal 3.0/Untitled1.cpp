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

/********   All Required Header Files ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
//    int i_am_noob = 1;
    int t;
	 cin >> t;
	while(t--)
	{
	//write your code
	int x;
	cin>>x;
	int ct=0;
	int ans=1;
	if( x>=5){
		if(x%5 == 0){
		cout<<x/5<<endl;
		}
		else{
		ans = x/5; // 3
		ct = (x - 5*ans);//(19-5*3)=4
		if(ct >= 3){
			if(ct%3 == 0){
				ans = ans + ct/3;
				cout<<ans<<endl;
			}
			else{
				ans = ans + 1; // 4
				ct = (ct - 3 ); // 1
				cout<<(ans + ct)<<endl;	
			}
		}
		else{
			
	 cout<<(ans+ct)<<endl;
				
			}
		}
	}
	else if(x >= 3){
		if(x%3 ==0){
				cout<<x/3<<endl;
			}
		else{
			ans = x/3;
			ct = (x - 3*ans );
			if(ct >=1){
				cout<<(ans+ct)<<endl;
			}
				
			}
	}
	else{
		if(x >1){
			cout<<"2"<<endl;
		}
		else{
			cout<<"1"<<endl;
		}
	}
	
	}

}


