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
	// cin >> t;

	while(i_am_noob--)
	{
	//write your code
	      int a,b;
      cin>>a>>b;
      vector<char> s,s2;
      if(a%2!=0 && b%2!=0 ||(a==1||b==1))
       {
           cout<<"-1"<<endl;
           continue;
       }
          if(a%2==0)
          {
              for(int i=0;i<a/2;i++)
              {
                  s.push_back('a');
              }
              for(int i=0;i<b;i++)
              {
                  s.push_back('b');
              }
              for(int i=0;i<a/2;i++)
              {
                  s.push_back('a');
              }
          }
            else
            {
              for(int i=0;i<b/2;i++)
              {
                  s.push_back('b');
              }
              for(int i=0;i<a;i++)
              {
                  s.push_back('a');
              }
              for(int i=0;i<b/2;i++)
              {
                  s.push_back('b');
              }
          }
          
          if(a%2==0)
          {
              for(int i=0;i<a/2;i++)
              {
                  if(i==0)
                   {
                       s2.push_back('b');
                       s2.push_back('a');
                   }
                  else
                    s2.push_back('a');
              }
              for(int i=0;i<b-2;i++)
              {
                  s2.push_back('b');
              }
              for(int i=0;i<b/2;i++)
              {
                  if(i==a/2-1)
                   {
                       s2.push_back('a');
                       s2.push_back('b');
                   }
                  else
                    s2.push_back('a');
              }
          }
            else
            {
              for(int i=0;i<b/2;i++)
              {
                  if(i==0)
                   {
                       s2.push_back('a');
                       s2.push_back('b');
                   }
                  else
                    s2.push_back('b');
              }
              for(int i=0;i<a-2;i++)
              {
                  s.push_back('a');
              }
              for(int i=0;i<b/2;i++)
              {
                  if(i==a/2-1)
                   {
                     s2.push_back('b');
                    s2.push_back('a');
                   }
                  else
                    s2.push_back('a');
              }
          }
      for(int i=0;i<a+b;i++)	cout<<s[i];
       
      cout<<endl; 
      for(int i=0;i<a+b;i++)	cout<<s2[i];
       
      cout<<endl;



	}




}


