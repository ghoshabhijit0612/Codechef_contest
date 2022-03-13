#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n;
		cin>>d;
		int p=1;
		for(int i=1;i<=d;i++){
			if(p<n || p==n){
				if(i<=10){
					if((2*p)<n || 2*p==n) 	p=2*p;
					else{
						p=n;
						break;
					}
				}
				if(i>10){
					if((3*p)<n || 3*p==n) 	p=3*p;
					else{
						p=n;
						break;
					}
				}
			}
			else break;
		}
		cout<<p<<endl;
		
}
}
