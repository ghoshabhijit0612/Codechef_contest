#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n%2 != 0)
            return 0;
        n = n/2;
    }
    return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int arr[n],sum=0,b;
	for(int i=0;i<n;i++)	{
		cin>>arr[i];
		sum+=arr[i];
		}
	bool x=isPowerOfTwo(sum);
	if(x=true){
		cout<<"0"<<endl;
	}
	else{
		if(sum==0 || (sum-1)==0)	cout<<"0"<<endl;
		else{
			int a=ceil(log2(sum));
			int res=pow(2,b)-sum;
			int mini;
			int multi=(res+min(arr,(arr+n)))/min(arr,arr+n);
			for(int i=0;i<n;++i){
			if(arr[i]>arr[i+1]){
				mini=i+1;
			}
			else{
				mini=i;
			}
			}
			cout<<mini<<endl;
			
		}
	}
	}


return 0;
}
