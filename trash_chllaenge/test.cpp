#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>v;
	int x;
	cin>>x;
	do{
		v.push_back(x);
		cin>>x;
	}
	while(x!=42); 
		
	
	for( int i= 0;i<v.size();++i){
		cout<<v[i]<<endl;
	}
}

