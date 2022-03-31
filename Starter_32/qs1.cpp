#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int x,y;
        cin>>x;
        cin>>y;
       if(x>y){
           cout<<(x-y)<<endl;
       }
       else cout<<(y-x)<<endl;
    }

}