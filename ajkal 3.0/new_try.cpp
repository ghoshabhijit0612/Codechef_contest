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
	int n;
	cin>>n;
	vector<int>v;
	int z;
	for(int i=0;i<n;i++){
		cin>>z;
		v.push_back(z);
	}
	int i,ans1=0,ans2=0,ct=0;
	int size = v.size();
	while(size != 0){
		i=0;
		int f = v[i];
		v.erase(v.begin()+0);
		i++;
		size--;
		if(f > 1){
			v.push_back(f/2);
			size++;
		}
		if( ct == 0 || (ct % 2 == 0)){
			ans1+=f;
		}
		else{
			ans2 += f;
		}
		ct++;
	}
	int x = ans1-ans2;
   int val = abs(x);
	cout<<val<<endl;


	}




}


