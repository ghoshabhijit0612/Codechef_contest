#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int test;
	cin>>test;
	while(test--){
		ll n;
		cin>>n;
		int sum=0;
		ll i=1;
		while(i*i<(n-1)){
			if((n-1)%i==0){
				sum+=2;
			}
			i++;
			
		}
		if(pow((ll)sqrt(n-1),2)==n-1){
			sum++;
		}
		cout<<sum<<endl;
}
}
