#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n; cin >> n;
    vector<ll> v;
    v.push_back(n);
    while(n!=1){
        if(n%2==0){
            n/=2;
            v.push_back(n);
        }
        else{
            n = n*3 + 1;
            v.push_back(n);
        }
    }    
    for(auto a: v){
            cout << a << " ";
    }
    cout << endl;
}