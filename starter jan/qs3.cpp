#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
   string s;
   int size;
   cin>>size;
   cin>>s;
   int ct=0,res=0;
   for(int i=0;i<size;i++){
   	if(s[i] == '0'){
   		ct++;
	   }
	   else res++;
   }
  
   vector<char>a;
 for(int i=0;i<ct;i++){
 	 a.push_back('0');
 }
 for(int i=ct+1;i<=size;i++){
 	a.push_back('1');
 }
  for (int i = 0; i < a.size(); i++) {
        // Printing the element at
        // index 'i' of vector
        cout << a[i];
    }
   
//   string a;
//   for(int i=0;i<ct;i++){
// 	 a[i] == ;
// }
// for(int i=ct+1;i<=size;i++){
// 	a[i] == "y";
// }
//        cout<<a<<endl;
//        cout<<a[0]<<"-------";
cout<<endl;
    }
    
}
