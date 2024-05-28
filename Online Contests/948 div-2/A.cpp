#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t; cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        if(n<m){
            cout << "NO\n";
        }
        else{
            if(n%2==0){
                if(m%2==0){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
            else{
                if(m%2==1){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}