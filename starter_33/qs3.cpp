#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int test;
	cin>>test;
	while(test--)
	{
	long long int num;
    cin>>num;
    vector<long long int>arr(num);
    long long int  sum = 0,ct=0;
    for(int i=0;i<num;i++){
        cin >> arr[i];
        if(arr[i]% 2 == 0)	
		ct++; 		 }
		int res = min(ct,(num-ct)/2);
    if((num-ct)%2 == 0)	{
		cout<<res<<endl;
	}
	else	cout<<ct<<endl;
	}
	
}
