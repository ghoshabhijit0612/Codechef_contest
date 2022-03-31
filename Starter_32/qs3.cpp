#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
      int n,m;
      cin>>n;
      cin>>m;
      if(m == 0){
      	cout<<(n*2)<<endl;
	  }
	  else if( m> n){
	  	cout<<n<<endl;
	  }
	  else	cout<<(n-m) + n;
  }

}
