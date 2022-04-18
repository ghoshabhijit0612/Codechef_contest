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
	 cin >> i_am_noob;

	while(i_am_noob--)
	{
	//write your code
	int x,y,z;
	cin>>x>>y>>z;
	int res;
	if( x >= y){
		int xx = x/y;
		 res = z - xx;
	}
	else{
		int yy = y/x;
		 res = z - yy;
		
	}
	if(res<0){
		cout<<"0"<<endl;
	}
	else	cout<<res<<endl;
	



	}




}


