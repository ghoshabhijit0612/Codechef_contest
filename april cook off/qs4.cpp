#include<bits/stdc++.h>
using namespace std;
int summ(int n){
	int sum =0;
			while( n!= 0){
			sum = sum + n%10;
			n = n/10;
		}
		return sum;	
}
int main()
{
		int test;
		cin>>test;
	while(test--){
		int a,b,cnum,count =0,n;
		cin>>n;
		int sum = summ(n);
		if(sum %2 == 0){
			while(sum%2 ==0){
				n++;
				sum = summ(n);
			}
			cout<<n<<endl;
		}
			else{
			while(sum%2 !=0){
				n++;
				sum = summ(n);
			}
			cout<<n<<endl;
		}
		
		
		
	
	}


}
