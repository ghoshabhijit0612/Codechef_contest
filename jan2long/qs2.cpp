#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,a,ct=0;
	cin>>n;
	cin>>a;
	int arr[n];
	for(int i=0;i<n;i++)	cin>>arr[i];
	sort(arr,arr+n,greater<int>());
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		ct++;
		if(sum>=a)	break;
	}
	if(sum<a)	cout<<"-1"<<endl;
	else	cout<<ct<<endl;
	
}
return 0;
}
