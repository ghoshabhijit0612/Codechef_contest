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
    int i_am_noob = 1;
	 cin >> i_am_noob ;

	while(i_am_noob--)
	{
	//write your code
	stack<int>s;
	int sizes;
	cin>>sizes;
	for(int i=0;i<sizes;i++){
		int x;
		cin>>x;
		s.push(x);
	}
	int ct =0,ans1=0,ans2=0;
	while(!s.empty()){
		int top = s.top();
		s.pop();
		if( top > 1){
			s.push(top/2);
		}
		if(ct%2 ==0){
			ans1 += top;
		}
		else{
			ans2 += top;
		}
		ct++;
	}
	int x = ans2 - ans1;
	if(x>=0){
		cout<<x<<endl;
	}	
	else{
		cout<<x*(-1)<<endl;
	}




	}




}


