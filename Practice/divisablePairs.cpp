#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long int n,x,y; cin>>n>>x>>y;
        vector<long long int> vec(n);
        for(auto &val : vec){
            cin >> val;
        }
        map<long long int, map<long long int,long long int>>mp;

        long long ans = 0;
        for(int i=0; i<n; i++){
            ans += mp[(x-vec[i]%x)%x][vec[i]%y];
            mp[vec[i]%x][vec[i]%y]++;
        }
        cout << ans << endl;
    }
}