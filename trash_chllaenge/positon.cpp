#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int x1,x2;
		cin>>x1;
		cin>>x2;
		if(x2>x1){
			cout<<"No"<<endl;
		}
		else if(x1==x2){
			cout<<"yes"<<endl;
		}
		else{
			if((x1 +(x1-x2))==(x2+2*(x1-x2))){
				cout<<"yes"<<endl;
			}
		}
	}
}
