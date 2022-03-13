#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
//int recurtion(int arr[],int n,int k){
//
//}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n;
	cin>>k;
	int arr[n];
	for(int i=1;i<=n;i++){
		arr[i]=i;
	}
	vector<int>v;
	int mid=n/2;
	while(k--){
	if(k==0){
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
		break;
	}
	}
	if(k>0){
		for(int i=1;i<=mid;i+=2){
			v.push_back(arr[i]);
		}
		for(int i=mid+1;i<=n;i++){
			v.push_back(arr[i]);
		}
		for(int i=1;i<=n;i++){
			arr[i]=v[i];
		}	
		}
		}
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
return 0;
}
