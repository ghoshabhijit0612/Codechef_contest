#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string s;
		cin>>s;
		int c1=0,c0=0;
		int x=s.length();
		for(int i=0;i<x;++i){
			if(s[i]=='0') c0++;
			else c1++;
		}
		int ans=min(c0,c1);
		int answer=(0,(ans-1));
		cout<<answer<<endl;
//		 int ans=max(0,)
			
		
	}
}
