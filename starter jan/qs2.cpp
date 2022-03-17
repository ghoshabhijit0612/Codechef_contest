#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
        if((x)>k) cout<<0<<endl;
        else{
        	int s= (k/x);
        	if(s>n){
        		cout<<n<<endl;
			}
			else cout<<s<<endl;
		}
        
    }
    
}
