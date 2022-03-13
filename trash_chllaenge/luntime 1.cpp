#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
//#define 
int main(){
	int t;
	cin>>t;
	while(t--){
	long long n;
	cin>>n;
	int arr[n],ae=0;
	for(long long  i=0;i<n;i++){
		cin>>arr[i];
		ae++;
	}
	 int asize = sizeof(arr) / sizeof(arr[0]);
	 
	sort(arr,arr + asize);


	int b= (arr[ae-1]-(arr[0]))*(arr[ae-2]);
	cout<<b<<endl;
	

}
}
