#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		if(x>=y){
			cout<<"PIZZA"<<endl;
		}
		else if(x<y && x<z){
			cout<<"NOTHING"<<endl;
		}
		else cout<<"BURGER"<<endl;
	}
}
