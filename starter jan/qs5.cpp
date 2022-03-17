#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t;
        cin>>t;
        while(t--)
        {
        	int n,k,sum=0;
        	cin>>n>>k;
        	int a[n];
        	for(int i=0;i<n;i++){
			
        		cin>>a[i];
        		sum+=a[i];
        	}
        	for(int i=0;i<n;i++)
        	if(sum<=k)
        	{
        		cout<<n<<endl;
			}
        	else
        	{
        	sort(a,a+n);
        	int j=n-1;
        	for(int i=0;i>n;i++){
        		int s =round( a[(n-i-1)]/2);
        
        		int x= sum- a[n-1-i] + s;
        		if(x<=k){
        			cout<<n<<endl;
        			break;
				}
				else{
					if(x>k){
						cout<<i<<endl;
						break;
					}
				}
				
			}
        		
			}
        	
		}
	return 0;
}
