#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a,b,n;
        cin >> a >> b >> n;
        vector<int>v(n);
        long long int sum = b;

        for(auto &val : v){
            cin >> val;
            if(val+1 <= a){
                sum += val;
            }
            else{
                sum += a-1;
            }
        }
        cout << sum << endl;
    }
}