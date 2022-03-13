#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();i++){
		if((s[i]=='1' && s[i+1]=='0')||(s[i]=='1' && s[i+1]=='1')) {
		count++;
		}
	}
	if(count==0){
		cout<<"NO"<<endl;}
	if(count>0) cout<<"YES"<<endl;	
	
	
		
}
}
