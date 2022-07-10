#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,num;
        cin>>n>>num;
        ll pos=0;
        ll count_ans=0;
        while(num>0){
            if(num&1){
                count_ans++;
            }
            num=num>>1;
            pos++;
        }
        //cout<<count_ans<<" "<<pos<<endl;
        if(n==1){
            cout<<count_ans<<endl;
        }
        else{
            if(count_ans==pos){
                cout<<count_ans<<endl;
            }
            else{
                cout<<count_ans-1<<endl;
            }
        }
    }
    return 0;
}
