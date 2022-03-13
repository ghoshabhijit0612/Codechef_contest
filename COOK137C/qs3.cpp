#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	string a="abcdefghijklmnopqrstuvwxyz";
	int n;
	cin>>n;
	string s="";
	int i=0;
	while(n--){
		s+=a[i];
		if(i == 25)	i=0;
		i++;
	}
	cout<<s<<endl;
		
	}
}

