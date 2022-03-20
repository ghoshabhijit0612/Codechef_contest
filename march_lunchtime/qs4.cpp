#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t;
        cin>>t;
        while(t--)
        {
        	int n,x;
        	cin>>n;
        	cin>>x;
        	if(n%3 == 0 ){
        		int ans = (n/3)*2;
        		cout<<ans*x<<endl;
			}
			else{
				int anss = ((n /3)*2)+(n%3);
				 cout<<anss*x<<endl;
			}
			
   }
}
