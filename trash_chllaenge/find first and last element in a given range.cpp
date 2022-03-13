#include<iostream>
using namespace std;
int first(int arr[],int n,int key){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	
	while(s<=e){
	if(arr[mid]==key){
		ans=mid;
		e=mid-1;
	}
	else if(arr[mid]>key){
		e=mid-1;
	}
	else{
		s=mid+1;
	}
	 mid=s+(e-s)/2;
	}
return ans;
}
int second(int arr[],int n,int key){
	int s=0;
	int e=arr[n-1];
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(arr[mid]>key){
		e=mid-1;
		}
		else{
		s=mid+1;
		}
	 mid=s+(e-s)/2;
	}
return ans;
}
int main(){
	int arr[] ={1,4,3,4,4,4,4,6};
	int n=sizeof(arr);
	int x=first(arr,8,4);
	int y=second(arr,8,4);
	cout<<"the index first index is "<<x<<endl;
	cout<<"the index second index is "<<y<<endl;
}
