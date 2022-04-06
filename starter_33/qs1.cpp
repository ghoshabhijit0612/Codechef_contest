#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		int res;
		res= (a/4);
		if(a <= 4){
			cout<<"1"<<endl;
		}
		else if((a%4) == 0){
		    cout<<res<<endl;
		}
		else	cout<<(res+1)<<endl;
	}
}
