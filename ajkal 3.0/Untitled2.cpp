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
	queue<int>q;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		q.push(a); 
	}
	int i=1;
	int ans1=0;
	int ans2=0;
	while(!q.empty()){
	
		int z= q.front();
		q.pop();
	{
    if(i%2!=0){
    	if(z>1){
    	
    		ans1 = ans1 +z ;
    		q.push(z/2);	
		}
		else{
			ans1 = ans1+1;
		}
		i+=1;
	}
	else{
		if(z >1){		
    		ans2 = ans2 + z;
    		q.push(z/2);
		}
		else{
			ans2 = ans2+1;
		}
		i -= 1;
	}
	}
}
	int x = max(ans1,ans2);
	int y = min(ans1,ans2);
	cout<<(x-y)<<endl;
	
	}




}


