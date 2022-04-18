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
	 cin >>i_am_noob ;

	while(i_am_noob--)
	{
	//write your code
	stack<int>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		s.push(a); 
	}
	int i=1;
	int ans1=0;
	int ans2=0;
	int sizes =s.size(); 
	while(!s.empty()){
	
		int z= s.top();
		s.pop();
		sizes--;
	{
    if(i%2!=0){
    	if(z>1){
    	
    		ans1 = ans1 +z ;
    		s.push(z/2);	
		}
		else{
			ans1 = ans1+1;
		}
		i+=1;
	}
	else{
		if(z >1){		
    		ans2 = ans2 + z;
    		s.push(z/2);
		}
		else{
			ans2 = ans2+1;
		}
		i -= 1;
	}
	}
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


