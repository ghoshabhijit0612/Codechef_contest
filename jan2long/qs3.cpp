#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int x;
	cin>>x;
	vector<int>b1,b2,b3;
	for(int i=0;i<3;i++){
		int q;
		cin>>q;
		b1.push_back(q);
	}
		for(int i=0;i<3;i++){
		int q;
		cin>>q;
		b2.push_back(q);
	}
		for(int i=0;i<3;i++){
		int q;
		cin>>q;
		b3.push_back(q);
	}
	int a=	b1[1]+b1[2]+b2[2];
	int b=	b2[0]+b3[0]+b3[1];	
	
	int z=max(a,b);
	cout<<z<<endl;
}
return 0;
}
