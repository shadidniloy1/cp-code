#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t; cin >> t;
    while(t--){
        ll n,p; cin >> n >> p;
        vector<ll> a(n), b(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        ll ans = p;
        vector<pair<ll, ll>> vec;
        for(ll i=0; i<n; i++){
            cin >> b[i];
            vec.push_back({min(p, b[i]), a[i]});
        }
        sort(vec.begin(), vec.end());

        ll remPerson = n-1;
        for(ll i=0; i<n-1; i++){
            ans += min((vec[i].second),remPerson)*vec[i].first;
            remPerson -= min(remPerson, vec[i].second);
        }
        cout << ans <<endl;
    }
}