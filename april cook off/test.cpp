#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,p;
		cin>>a;
		cin>>b;
		cin>>p;
//		int 
		if( a== p || b==p ){
			cout<<"0"<<endl;
		}
		else{
			int x = (1/2)*p;
			cout<<p<<endl;
		}
	}
}
