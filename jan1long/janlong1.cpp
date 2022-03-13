#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		float a,b,c,d;
		cin>>a;
		cin>>b;
		cin>>c;
		cin>>d;
		float x=(a*a)/(c*c*c);
		float y=(b*b)/(d*d*d);
//		cout<<fixed<<setprecision(3);
		if(x==y) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
