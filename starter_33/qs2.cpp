#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	string s;
	cin>>n;
	cin>>s;
	int count_one=0,count_zero=0;
	for(int i=0;i<n;i++){
		if(s[i]== '1' && s[i+1]=='1'){
			count_one++;
			
		}
		if(s[i] == '0'){
			count_zero++;
		}
		
	}
	if(count_one>=1){
		cout<<"2"<<endl;
	}
	else if(count_zero == n){
		cout<<"0"<<endl;
	}
	else{
		cout<<"1"<<endl;
	}
}
}
