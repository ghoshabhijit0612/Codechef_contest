#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int a1,b1,c1;
		int a2,b2,c2;
		cin>>a1;
		cin>>b1;
		cin>>c1;
		cin>>a2;
		cin>>b2;
		cin>>c2;
		if((a1+b1+c1)>(a2+b2+c2))	cout<<"DRAGON"<<endl;
		else if((a1+b1+c1)<(a2+b2+c2))	cout<<"SLOTH"<<endl;
		else if((a1+b1+c1)==(a2+b2+c2)){
			if(a1>a2)	cout<<"DRAGON"<<endl;
			else if(a2>a1)	cout<<"SLOTH"<<endl;
			else if(b1>b2)	cout<<"DRAGON"<<endl;
			else if(b2>b1)	cout<<"SLOTH"<<endl;
			else if(c1>c2)	cout<<"DRAGON"<<endl;
			else if(c2>c1)	{
			cout<<"SLOTH"<<endl;}
			else cout<<"TIE"<<endl;
		}
		
	}
}
