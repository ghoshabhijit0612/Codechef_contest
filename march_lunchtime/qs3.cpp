#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t;
        cin>>t;
        while(t--)
        {
        	int x;
        	cin>>x;
        	if( x%5 != 0){
        		cout<<"-1"<<endl;
			}
			else{
				if( x%10 == 0){
					cout<<(x/10)<<endl;
				}
				else{
					int n= (x-5)/10 + 1;
					cout<<n<<endl;				}
			}
        	
		}
	return 0;
}
