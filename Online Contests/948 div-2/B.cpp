#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n], b[n+1];
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n+1; i++) cin >> b[i];

        ll cnt=0, m = 0;
        for(ll i=0; i<n; i++){
            if(a[i]>=b[n] && b[i]<=b[n]){
                cnt = 1;
                m = 1;
                break;
            }
            else if(a[i]<=b[n] && b[i]>=b[n]){
                cnt = 1;
                m = 1;
                break;
            }
        }
        ll flag = 0, cont = 1e9, s=0;
        for(ll i=0; i<n; i++){
            cnt += abs(a[i]-b[i]);
            if(a[i]>=b[i]){
                if(a[i]>=flag){
                    flag = a[i];
                }
                
            }
            else{
                if(b[i]>=flag){
                    flag = b[i];
                }
                
            }
            if(a[i]<=cont){
                cont = a[i];
            }
            if(b[i]<=cont){
                cont = b[i];
            }
        }
        int cnt2=0, cnt1=0;
        if(m==0){
            cnt1 = abs(b[n]-flag)+1;
            cnt2 = abs(b[n]-cont)+1;
            cnt += min(cnt1, cnt2);
        }

        cout << cnt << endl;
    }
}