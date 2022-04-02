#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t;
		cin>>t;
	while(t--){
//		int d;
		int n;
		cin>>n;
		string s;
		cin>>s;
		int ct=0;
	    for(int i=0;i<n;i++){
	    	if((s[i] == '5' )|| (s[i]== '0')){
	    		ct++;
	    		break;
			}
		}
		if(ct >0){
			cout<<"YES"<<endl;
		}
		else	cout<<"NO"<<endl;
	
	}


}
