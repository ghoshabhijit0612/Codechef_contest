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
		int n;
	cin>>n;
     vector<int> arr1(n);
     for(int i=0;i<n;i++)
     {
         cin>>arr1[i];
     }
     unordered_map<int,int> m;
     
        for(int i=0;i<arr.size();++i){
            m[arr1[i]]++;
        }
        vector<pair<int,int>> pair_arr;
        for(auto j:mp)
        {
            pair_arr.push_back(make_pair(j.second,j.first));
        }
        
        
        sort(pair_arr.begin(),pair_arr.end());
        
        if(pair_arr[pair_arr.size()-1].first!=pair_arr[pair_arr.size()-2].first)
        
        {
            cout<< to_string(pair_arr[pair_arr.size()-1].second)<<endl;
        }

        else
        {
            cout<<"CONFUSED"<<endl;
        }
         
     }
 return 0;
	
	




	}




}



