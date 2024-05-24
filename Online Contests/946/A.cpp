#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t; cin >> t;
    while(t--){
        ll x,y; cin >> x >> y;
        // ll a1 = x/7;
        // ll r1 = x%7;
        ll a2 = y/2;
        ll r2 = y%2;
        ll k;
        
        if(r2>0 && y>2){
            a2++;
            k = a2*7;
            k*=2;
        }
        else if(a2==0 && y<2){
            k = y*7;
        }
        else if(y==1){
            k = 7;
        }
        else{
            k = a2*7;
        }
        
        ll ans = 0;
        if(x>k){
            int div = (x-k)/15;
            int rem = (x-k)%15;
            if(rem>0){
                div++;
            }
            ans = a2+div;
        }
        else if(a2>0){
            ans = a2;
        }
        else if(x==0 && y==0){
            ans = 0;
        }
        else{
            ans = a2+1;
        }
        // else{
        //     ans = 1;
        // }
        cout << ans << endl;
    }


    return 0;
}