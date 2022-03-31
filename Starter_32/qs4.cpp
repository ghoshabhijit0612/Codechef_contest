#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
     int n,x,y;
     cin>>n;
     cin>>x;
     cin>>y;
     string s;
     cin>>s;
     int sum =0;
//     int size = s.length();
	if(y>x){
	
	sort(s.begin(),s.end());
	} 
	else{
		 sort(s.begin(),s.end(), greater<int>());
	}

	 for(int i=0;i<n;i++){
	 	if(s[i]=='1' && s[i+1]=='0'){
	 		 sum = sum + y;
		 } 
		 if(s[i] == '0' && s[i+1] == '1'){
		 	sum = sum + x;
		 }
	 }   
	 cout<<sum<<endl;  
  }

}
