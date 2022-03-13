
#include <iostream>
using namespace std;
int  array_riffle(int arr[],int n,int k){
    int arr1[n];
    if(k==0){
    	return *arr;
	}
	else{
	
    for (int i=0;i<n;i++){
        arr1[i]=arr[i];
        }
    int k = n/2;
    for (int i=0;i<k;i++){
        arr[i]=arr1[2*i];
    }
    for (int i=0 ;i<k;i++){
        arr[k+i] = arr1[2*i+1];
    }
    return  array_riffle(arr, n,k-1);
}
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        
        cin>>n;
        cin>>k;
        int arr[n];
        for (int i=0;i<n;i++){
            arr[i] = i;
            }
          array_riffle(arr,n,k);
            
        for (int i=0;i<n;i++){
            cout<<arr[i]<<" ";
            }
        cout << endl;
    }
    return 0;
}
